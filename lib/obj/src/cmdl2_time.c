/* **** Notes

Commandlet to output the local time
*/

/* **** Enhanced Metafiles for Device Independency
fn. CreateEnhMetaFile()
creates a device context for an enhanced-format metafile. This device context
can be used to store a device-independent picture.
i.e., Map an enhmeta device context.
----
fn. CloseEnhMetaFile()
closes an enhanced-metafile device context
and returns a handle that identifies an enhanced-format metafile.
i.e., Unmap the enhmeta device context and return a handle for enhmeta file.
----
fn. DeleteEnhMetaFile()
Unmap an enhmeta object on the RAM but not delete an enhmeta file if the one is on the storage device.
i.e., delete the enhmeta file.
*/

# define C_CODE_STDS
# define C_CALEND
# define C_AS
# define C_W32API

# define COUNT_MODULES (1)
# define COUNT_WINDOWS (1)
# define COUNT_OBJS (5)
# define COUNT_POS (4)
# define COUNT_DC (3)

# define DEFAULT_SECS (10)
# define BUFF (0x200)

# define external extern

# include "./../../../incl/config.h"

# include <objbase.h> // for combaseapi.h
# include <wincodec.h>
# include <wincodecsdk.h>
# pragma comment(lib, "windowscodecs.lib")

/* **** The Windows Imaging Component (WIC)
provides a Component Object Model (COM) based API for use in C and C++.
Reference: on site docs.microsoft.com and/or more..
e.g.,
Instance Creation Helper Functions
CreateInstance()
----
1.
Create an IWICImagingFactory object to create Windows Imaging Component (WIC) objects.
r = CoCreateInstance(CLSID_WICImagingFactory, NULL, CLSCTX_INPROC_SERVER, IID_PPV_ARGS(&m_pIWICFactory));
----
2.
CreateDecoderFromFilename() to create IWICBitmapDecoder from an image file.
r = S_OK;
IWICBitmapDecoder(*pI_decoder) = (NULL);
IWICBitmapFrameDecode(*pI_decoder_frame) = (NULL);
r = m_pIWICFactory->CreateDecoderFromFilename(L"turtle.jpg", NULL, GENERIC_READ, WICDecodeMetadateCacheOnDemand, (&pI_decoder));
----
3.
Get the first IWICBitmapFrameDecode of the image.
// Retrieve the 1st bitmap frame.
if(SUCCEEDED(r)) r = pIDecoder->GetFrame(0, &pIDecoder_frame);
----
The JPEG file format
only supports a single frame. Because the file in this example
is a JPEG file, the 1st frame (0)
is used. For image formats that have multiple frames,
see <How to retrieve the Frames of an Image> for accessing each frame of the image.
4.
Process the image frame. For additional information about IWICBitmapSource object,
see the Bitmap Sources Overview.
----
Refer on site docs.microsoft.com <How to create a decoder using an image filename>
*/

unsigned int(__stdcall cmdl2_time(void(*argp))) {

/* **** DATA */
external signed char(cmdl_time_Toggle);
external signed char(Announcements);
external signed int(Running);

external signed char const(*(dayoftheweek[]));
external signed char const(*(month[]));

// for the WIC
auto double(xres_dpi);
auto double(yres_dpi);
auto UINT(bmp_width);
auto UINT(bmp_height);
auto WICPixelFormatGUID(pixel_format);
auto WICRect(wic_rect);
auto UINT(stride);
auto IWICPalette(palette);

// for the module handles
enum {
INSTANCE
};

// for the window handles
enum {
ACTIVE
};

// for the object handles
// Be careful in the order (with fn. SelectOject() to de-select the 3 objects from and fn. DeleteObject() to delete the 4 ones from the bottom.)
enum {
FONT, BRUSH, BITMAP, REGION, LOADEDBITMAP
};

// for the handles of the memory device context
enum {
SI, DI, CACHE
};

// for the co-ordinate
enum {
X, Y, OFFSET_X, OFFSET_Y
};

auto signed int const(LIMIT) = (3600);
auto signed int const(QUANTUM) = (0x10);
auto signed int const(SNOOZE) = (0x04);
auto signed int const(DELAY) = (0x02*(QUANTUM));

// Default
auto signed int(secs) = (DEFAULT_SECS);
auto time_t(t), (deadline);

auto unsigned int(SOLIDBRUSH) = (0xC09070);

auto signed int(old_bkmode), (old_bkcolor), (old_textcolor);
auto unsigned int(old_textalign);

auto signed int const(BKMODE) = (TRANSPARENT);
auto signed int const(BKCOLOR) = (0x000000);
auto signed int const(TEXTCOLOR) = (0xF0F0F0);

auto signed int const(SHADE_TEXTCOLOR) = (0x606060);
auto signed int const(SHADE_XPOS) = (0x02);
auto signed int const(SHADE_YPOS) = (0x02);


auto SYSTEMTIME(st);

auto RECT(rect) = {
(int long) (NIL)
};


auto signed char(*p);
auto signed char(bmp_filename[]) = ("./resource/bg.bmp");
auto signed char(buff[BUFF]) = {
(signed char) (NIL)
};

auto signed char(c);
auto signed int(i), (j), (l), (r), (z);

auto void(*(module[COUNT_MODULES])) = {
(void(*)) (NIL)
};
auto void(*(window[COUNT_WINDOWS])) = {
(void(*)) (NIL)
};
auto void(*(old_obj[COUNT_OBJS])) = {
(void(*)) (NIL)
};
auto void(*(obj[COUNT_OBJS])) = {
(void(*)) (NIL)
};
auto void(*(dc[COUNT_DC])) = {
(void(*)) (NIL)
};

auto unsigned int(region[2]) = {
(unsigned int) (NIL)
};

auto unsigned int(scr[2]) = {
(unsigned int) (NIL)
};

auto unsigned int(pos[COUNT_POS]) = {
(unsigned int) (NIL)
};

auto signed int(height_font) = (36);
auto signed int(width_font) = (9);
auto signed int(escapement_font) = (NIL);
auto signed int(orientation_font) = (NIL);
auto signed int(weight_font) = (FW_REGULAR);
auto int unsigned(italic_font) = (NIL);
auto int unsigned(underline_font) = (NIL);
auto int unsigned(strikeout_font) = (NIL);
auto int unsigned(charset_font) = (ANSI_CHARSET);
auto int unsigned(outprecision_font) = (OUT_TT_ONLY_PRECIS);
auto int unsigned(clipprecision_font) = (NIL);
auto int unsigned(quality_font) = (NIL);
auto int unsigned(pitchandfamily_font) = (NIL);
auto signed char(facename_font[]) = ("Tahoma");

/* **** CODE/TEXT */
Running++;

if(!cmdl_time_Toggle) {
cmdl_time_Toggle++;
}

else {
XOR(cmdl_time_Toggle, cmdl_time_Toggle);
--Running;
return(0x00);
}


/* Monitoring
printf("%s\n", ("<< cmdl_time runs."));
printf("%s\n", (char signed(*)) (argp));
//*/


/* **** Count the arguments */
r = ct_args(argp);

if(!r) {
printf("\n%s", ("<< Error at fn. ct_args() in fn. cmdl2_time()."));
return(~(NIL));
}

/* **** Set the time */
if(r<(2)) {
}

else {
XOR(i, i);
c = (char signed) cv_lett(&i, (argp));
if(!(c^(~(NIL)))) {
// Error
printf("\n%s", ("<< Error at fn. cv_lett()."));
return(~(NIL));
}
// Monitoring
// printf("\n%s%d", ("i after fn. cv_lett() is: "), (i));
secs = (i);
if(!secs) {
secs = (DEFAULT_SECS);
}
else {
secs = (secs%(LIMIT));
}}


*(scr+(X)) = GetSystemMetrics(SM_CXSCREEN);

if(!(*(scr+(X)))) {
printf("\n%s", ("<< Error at GetSystemMetrics(SM_CXSCREEN)."));
return(~(NIL));
}
else {
// printf("\n%s%d", ("x pixels : "), (int unsigned) (*(scr+(X))));
}


*(scr+(Y)) = GetSystemMetrics(SM_CYSCREEN);

if(!(*(scr+(Y)))) {
printf("\n%s", ("<< Error at GetSystemMetrics(SM_CYSCREEN)."));
return(~(NIL));
}
else {
// printf("\n%s%d", ("y pixels : "), (int unsigned) (*(scr+(Y))));
}


(*(region+(X))) = (*(scr+(X)));
(*(region+(Y))) = (SHADE_YPOS+(height_font));

(*(pos+(X))) = (NIL);
(*(pos+(Y))) = (NIL);


/* **** Create/map the objects on the RAM */
*(obj+(REGION)) = (void(*)) CreateRectRgn(0, (0), (*(region+(X))), (*(region+(Y))));

if(!(*(obj+(REGION)))) {
printf("\n%s", ("<< Error at CreateRectRgn()."));
return(~(NIL));
}
else {
// Monitoring
// printf("\n%s%p", ("The handle of a region object created/mapped on the RAM will be on offset "), (*(obj+(REGION))));
}


*(obj+(BRUSH)) = (void(*)) CreateSolidBrush(SOLIDBRUSH);

if(!(*(obj+(BRUSH)))) {
printf("\n%s", ("<< Error at CreateSolidBrush()."));
return(~(NIL));
}
else {
// Monitoring
// printf("\n%s%p", ("The handle of a brush object created/mapped on the RAM will be on offset "), (*(obj+(BRUSH))));
}


*(obj+(FONT)) = (void(*)) CreateFont(
height_font, width_font, escapement_font, orientation_font, weight_font, \
italic_font, underline_font, strikeout_font, charset_font, outprecision_font, clipprecision_font, \
quality_font, pitchandfamily_font, (char signed*) (facename_font)
);

if(!(*(obj+(FONT)))) {
printf("\n%s", ("<< Error at fn. CreateFont()."));
return(~(NIL));
}
else {
// Monitoring
// printf("\n%s%p", ("The handle of a font object created/mapped on the RAM will be on offset "), (*(obj+(FONT))));
}


/* **** **** Create a bitmap object and two memory device contexts from the common DC */

*(dc+(CACHE)) = (void(*)) GetDC((void(*)) (*(window+(ACTIVE))));

if(!(*(dc+(CACHE)))) {
printf("\n%s", ("<< Error at GetDC()."));
return(~(NIL));
}
else {
// Monitoring
// printf("\n%s%p", ("The handle of the common device context mapped on the RAM will be on offset "), (*(dc+(CACHE))));
}

i = (-1+(COUNT_DC));

while(i) {
(*(dc+(--i))) = (void(*)) CreateCompatibleDC(*(dc+(CACHE)));
if(!(*(dc+(i)))) {
printf("\n%s", ("<< Error at fn. CreateCompatibleDC()."));
return(~(NIL));
}
else {
// Monitoring
// printf("\n%s%p", ("The handle of a memory device context created/mapped on the RAM will be on offset "), (*(dc+(i))));
}}

*(obj+(BITMAP)) = (void(*)) CreateCompatibleBitmap(*(dc+(CACHE)), (*(region+(X))), (*(region+(Y))));

if(!(*(obj+(BITMAP)))) {
printf("\n%s", ("<< Error at fn. CreateCompatibleBitmap()."));
return(~(NIL));
}
else {
// Monitoring
// printf("\n%s%p", ("The handle of a compatible bitmap object created/mapped on the RAM will be on offset "), (*(obj+(BITMAP))));
}

r = ReleaseDC(*(window+(ACTIVE)), (*(dc+(CACHE))));

if(!r) {
printf("\n%s", ("<< Error at ReleaseDC()."));
return(~(NIL));
}

/* **** Get a handle of the module object (to load a bitmap file) */
*(module+(INSTANCE)) = (void(*)) GetModuleHandle((char signed(*)) (NIL));

if(!(*(module+(INSTANCE)))) {
printf("\n%s", ("<< Error at fn. GetModuleHandle()."));
return(~(NIL));
}
else {
// Monitoring
// printf("\n%s%p", ("The handle of a module object created/mapped on the RAM will be on offset "), (*(module+(INSTANCE))));
}


//* **** Optional
r = GetModuleFileName(*(module+(INSTANCE)), (buff), (BUFF));

if(!r) {
printf("\n%s", ("<< Error at fn. GetModuleFileName()."));
return(~(NIL));
}
else {
// Monitoring
// printf("\n%s%s", ("The file name of a module object created/mapped on the RAM is: "), (buff));
}

//*/


/* **** Get the file name of the desktop wallpaper to convert into the bitmap file format..
r = SystemParametersInfo(SPI_GETDESKWALLPAPER, BUFF, buff, (NIL));

if(!r) {
printf("\n%s", ("<< Error at fn. SystemParametersInfo()."));
printf("\n%s%d", ("<< the r is: "), (r));
return(~(NIL));
}
else {
printf("\n%s%s", ("The path of the desktop wallpaper is "), (buff));
}

//*/



/* **** Retrieve a handle of the object loaded (or mapped (or stored on the RAM)) from a bitmap file. */
/* **** e.g., the loaded, created or mapped objects ..are deleted.

*(obj+(LOADEDBITMAP)) = (void(*)) LoadImage(*(module+(INSTANCE)), (bmp_filename), (IMAGE_BITMAP), (0), (0), (LR_LOADFROMFILE));

if(!(*(obj+(LOADEDBITMAP)))) {
printf("\n%s", ("<< Error at fn. LoadImage()."));
return(char signed) (~(NIL));
}
else {
printf("\n%s%p", ("The handle of a loaded bitmap object created/mapped on the RAM will be on offset "), (*(obj+(LOADEDBITMAP))));
}

//*/


/* **** **** Selecting the created, loaded or mapped objects to two memory Device Context */

*(old_obj+(BRUSH)) = (void(*)) SelectObject(*(dc+(DI)), (void(*)) (*(obj+(BRUSH))));

if(!(*(old_obj+(BRUSH)))) {
printf("\n%s", ("<< Error at fn. SelectObject() of the Brush with the NULL."));
return(~(NIL));
}
if(!((int long long signed)HGDI_ERROR^ (int long long signed) (*(old_obj+(BRUSH))))) {
printf("\n%s", ("<< Error at fn. SelectObject() of the Brush with the HGDI_ERROR"));
return(~(NIL));
}


*(old_obj+(FONT)) = (void(*)) SelectObject(*(dc+(DI)), (void(*)) (*(obj+(FONT))));

if(!(*(old_obj+(FONT)))) {
printf("\n%s", ("<< Error at fn. SelectObject(FONT) with the NULL."));
return(~(NIL));
}
if(!((int long long signed)HGDI_ERROR^ (int long long signed) (*(old_obj+(FONT))))) {
printf("\n%s", ("<< Error at fn. SelectObject(FONT) with the HGDI_ERROR"));
return(~(NIL));
}


*(old_obj+(BITMAP)) = (void(*)) SelectObject(*(dc+(DI)), (void(*)) (*(obj+(BITMAP))));

if(!(*(old_obj+(BITMAP)))) {
printf("\n%s", ("<< Error at fn. SelectObject(BITMAP) with the NULL."));
return(~(NIL));
}
if(!((int long long signed)HGDI_ERROR^ (int long long signed) (*(old_obj+(BITMAP))))) {
printf("\n%s", ("<< Error at fn. SelectObject(BITMAP) with the HGDI_ERROR"));
return(~(NIL));
}


/* **** **** To (*(dc+(SI)))

*(old_obj+(LOADEDBITMAP)) = (void(*)) SelectObject(*(dc+(SI)), (void(*)) (*(obj+(LOADEDBITMAP))));

if(!(*(old_obj+(LOADEDBITMAP)))) {
printf("\n%s", ("<< Error at fn. SelectObject(LOADEDBITMAP) with the NULL."));
return(~(NIL));
}
if(!((int long long signed)HGDI_ERROR^ (int long long signed) (*(old_obj+(LOADEDBITMAP))))) {
printf("\n%s", ("<< Error at fn. SelectObject(LOADEDBITMAP) with the HGDI_ERROR"));
return(~(NIL));
}
//*/


/* **** Selecting before a loop */
old_bkcolor = SetBkColor(*(dc+(DI)), (BKCOLOR));

if(!(old_bkcolor^(CLR_INVALID))) {
printf("\n%s", ("<< Error at SetBkColor()."));
return(~(NIL));
}

old_bkmode = SetBkMode(*(dc+(DI)), (BKMODE));

if(!old_bkmode) {
printf("\n%s", ("<< Error at SetBkMode()."));
return(~(NIL));
}

/* **** !?
old_textalign = SetBkMode(*(dc+(DI)), (TA_RIGHT));
if(!(old_textalign^(GDI_ERROR))) {
printf("\n%s", ("<< Error at SetTextAlign()."));
return(~(NIL));
}
//*/


/* **** A loop */
// r = printf("\n%s%d%s\n", ("Please wait for about "), (secs), (" seconds or type --time to stop."));

z = (z^(z));

time(&t);

deadline = (time_t) (t+((time_t) (secs)));

/* **** Monitoring
printf("\n%s%zd", ("deadline is: "), (deadline));
printf("\n%s%zd", ("Now this is: "), (t));
//*/

while(t<(deadline)) {

/* **** CPU idling */
Sleep(DELAY);

/* **** Saving */
if(z<(3)) {
(z++);
}
else {
time(&t);
z = (z^(z));
}


/* **** Check the toggle to stop */
if(!(cmdl_time_Toggle)) {
break;
}

/* **** Check the announcements to stop */
if(!Announcements) {
}

else {
break;
}


//* **** Fill
r = FillRgn(*(dc+(DI)), (void(*)) (*(obj+(REGION))), (void(*)) (*(obj+(BRUSH))));

if(!r) {
printf("\n%s", ("<< Error at FillRgn()."));
return(~(NIL));
}
else {
}
//*/


/* **** Use the Bit Block Transfer to map the loaded bitmap image on an off-screen buffer
r = BitBlt(*(dc+(DI)), 0, 0, (*(region+(X))), (*(region+(Y))), (*(dc+(SI))), 0, 0, SRCCOPY);

if(!r) {
printf("\n%s", ("<< Error at fn. BitBlt()."));
return(~(NIL));
}
//*/

GetLocalTime(&(st));

sprintf(
buff, ("%2d:%02d:%02d %03d %s %d %s %d"), \
(st.wHour), (st.wMinute), (st.wSecond), (st.wMilliseconds), \
(*(dayoftheweek+(st.wDayOfWeek))), (st.wDay), (*(month+(st.wMonth+(~(NIL))))), (st.wYear)
);


// 1st outputting
old_textcolor = SetTextColor(*(dc+(DI)), (SHADE_TEXTCOLOR));

if(!(old_textcolor^(CLR_INVALID))) {
printf("\n%s", ("<< Error at SetTextColor()."));
return(~(NIL));
}

r = ct(buff);

if(!r) {
printf("\n%s", ("<< Error at ct()."));
// return(~(NIL));
}
else {
r = TextOut(*(dc+(DI)), (SHADE_XPOS+(*(pos+(X)))), (SHADE_YPOS+(*(pos+(Y)))), (buff), (r));
if(!r) {
printf("\n%s", ("<< Error at fn. TextOut()."));
// return(~(NIL));
}}

old_textcolor = SetTextColor(*(dc+(DI)), (old_textcolor));

if(!(old_textcolor^(CLR_INVALID))) {
printf("\n%s", ("<< Error at SetTextColor()."));
return(~(NIL));
}


// 2nd outputting
old_textcolor = SetTextColor(*(dc+(DI)), (TEXTCOLOR));

if(!(old_textcolor^(CLR_INVALID))) {
printf("\n%s", ("<< Error at SetTextColor()."));
return(~(NIL));
}

r = ct(buff);

if(!r) {
printf("\n%s", ("<< Error at ct()."));
// return(~(NIL));
}
else {
r = TextOut(*(dc+(DI)), (*(pos+(X))), (*(pos+(Y))), (buff), (r));
if(!r) {
printf("\n%s", ("<< Error at fn. TextOut()."));
// return(~(NIL));
}}

old_textcolor = SetTextColor(*(dc+(DI)), (old_textcolor));

if(!(old_textcolor^(CLR_INVALID))) {
printf("\n%s", ("<< Error at SetTextColor()."));
return(~(NIL));
}


/* **** Getting and releasing a handle of the common Dedive Context to use in fn. BitBlt() */
*(dc+(CACHE)) = (void(*)) GetDC((void(*)) (*(window+(ACTIVE))));

if(!(*(dc+(CACHE)))) {
printf("\n%s", ("<< Error at GetDC()."));
return(~(NIL));
}
else {
// Monitoring
// printf("\n%s%p", ("The handle of the common device context mapped on the RAM will be on offset "), (*(dc+(CACHE))));
}

r = BitBlt(*(dc+(CACHE)), 0, 0, (*(region+(X))), (*(region+(Y))), (*(dc+(DI))), 0, 0, SRCCOPY);

if(!r) {
printf("\n%s", ("<< Error at fn. BitBlt()."));
return(~(NIL));
}

r = (int signed) ReleaseDC(*(window+(ACTIVE)), (*(dc+(CACHE))));

if(!r) {
printf("\n%s", ("<< Error at ReleaseDC()."));
return(~(NIL));
}}




/* **** **** De-selecting after a loop */

/* **** !?
old_textalign = SetBkMode(*(dc+(DI)), (old_textalign));
if(!(old_textalign^(GDI_ERROR))) {
printf("\n%s", ("<< Error at SetTextAlign()."));
return(~(NIL));
}
//*/

old_bkmode = SetBkMode(*(dc+(DI)), (old_bkmode));
if(!old_bkmode) {
printf("\n%s", ("<< Error at SetBkMode()."));
return(~(NIL));
}

old_bkcolor = SetBkColor(*(dc+(DI)), (old_bkcolor));
if(!(old_bkcolor^(CLR_INVALID))) {
printf("\n%s", ("<< Error at SetBkColor()."));
return(~(NIL));
}


/* **** De-selecting the handle of the loaded bitmap objects to a memory Device Context.
*(old_obj+(LOADEDBITMAP)) = (void(*)) SelectObject(*(dc+(SI)), (void(*)) (*(old_obj+(LOADEDBITMAP))));

if(!(*(old_obj+(LOADEDBITMAP)))) {
printf("\n%s", ("<< Error at fn. SelectObject to de-select a loaded bitmap to (*(dc+(SI)))."));
return(~(NIL));
}

if(!((int long long signed) HGDI_ERROR^ (int long long signed) (*(old_obj+(LOADEDBITMAP))))) {
printf("\n%s", ("<< Error at fn. SelectObject to de-select a loaded bitmap to (*(dc+(SI))) with HGDI_ERROR."));
return(~(NIL));
}

//*/


// Except for the two objects i.e., a region object and a bitmap object loaded on (*(dc+(SI))) ---- Please look at the above process.

i = (-2+(COUNT_OBJS));

while(i) {
*(old_obj+(i)) = (void(*)) SelectObject(*(dc+(DI)), (void(*)) (*(old_obj+(--i))));
if(!(*(old_obj+(i)))) {
printf("\n%s%d", ("<< Error at fn. SelectObject to de-select and the i is: "), (i));
return(~(NIL));
}
if(!((int long long signed) HGDI_ERROR^ (int long long signed) (*(old_obj+(i))))) {
printf("\n%s%d", ("<< Error at fn. SelectObject to de-select with HGDI_ERROR and the i is: "), (i));
return(~(NIL));
}}


/* **** Deleting/unmapping two memory Device Contexts on the RAM */
i = (-1+(COUNT_DC));

while(i) {
r = DeleteDC(*(dc+(--i)));
if(!r) {
printf("\n%s%d", ("<< Error at fn. DeleteDC() and the r is: "), (r));
printf("\n%s%d", ("<< Error at fn. DeleteDC() and the i is: "), (i));
return(~(NIL));
}
else {
}}


/* **** **** Delete(, unload or unmap) all the objects mapped on the RAM */
/* **** Except a handle of the module object of the process to currently run on */
/* **** Should <an offset handle of the current module object returned by fn. GetModuleHandle()> be released..? */
/* Aux., except an <un-loaded> bitmap object: (-1) */

i = (-1+(COUNT_OBJS));

while(i) {
r = DeleteObject(*(obj+(--i)));
if(!r) {
printf("\n%s%d", ("<< Error at fn. DeleteObject() and the i is: "), (i));
return(~(NIL));
}}

/* Monitoring
printf("\nAll DONE!");
//*/

XOR(cmdl_time_Toggle, cmdl_time_Toggle);

--Running;
return(0x00);
}
