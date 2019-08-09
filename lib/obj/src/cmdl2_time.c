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

unsigned(__stdcall cmdl2_time(void(*argp))) {

/* **** DATA */
external signed short(cmdl_time_Toggle);
external signed short(Announcements);
external signed(Running);

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

auto signed const(LIMIT) = (3600);

auto signed const(QUANTUM) = (0x10);
auto signed const(SNOOZE) = (0x04);
auto signed const(DELAY) = (0x03*(QUANTUM));

// Default
auto time_t(deadline), (t);
auto time_t(secs) = (DEFAULT_SECS);


auto signed(old_bkmode), (old_bkcolor), (old_textcolor);
auto unsigned(old_textalign);

auto signed const(BKMODE) = (TRANSPARENT);
auto signed const(BKCOLOR) = (0x000000);

auto signed const(SHADE_XPOS) = (0x02);
auto signed const(SHADE_YPOS) = (0x02);

// dark
auto unsigned(SOLIDBRUSH) = (0x3F3F3F);
auto signed const(SHADE_TEXTCOLOR) = (0x404040|(SOLIDBRUSH));
auto signed const(TEXTCOLOR) = (0xF0F0F0&(0x808080|(SHADE_TEXTCOLOR)));


auto SYSTEMTIME(st);

auto RECT(rect) = {
(long) (NIL)
};

auto signed char(*p);
auto signed char(bmp_filename[]) = ("./resource/bg.bmp");
auto signed char(buff[BUFF]) = {
(signed char) (0x00)
};

auto signed char(c);
auto signed(i), (l), (r);

auto void(*(module[COUNT_MODULES])) = {
(void(*)) (0x00)
};
auto void(*(window[COUNT_WINDOWS])) = {
(void(*)) (0x00)
};
auto void(*(old_obj[COUNT_OBJS])) = {
(void(*)) (0x00)
};
auto void(*(obj[COUNT_OBJS])) = {
(void(*)) (0x00)
};
auto void(*(dc[COUNT_DC])) = {
(void(*)) (0x00)
};

auto unsigned(region[2]) = {
(unsigned) (0x00)
};

auto unsigned(scr[2]) = {
(unsigned) (0x00)
};

auto unsigned(pos[COUNT_POS]) = {
(unsigned) (0x00)
};

auto signed(height_font) = (21);
auto signed(width_font) = (7);
auto signed(escapement_font) = (0x00);
auto signed(orientation_font) = (0x00);
auto signed(weight_font) = (FW_REGULAR);
auto unsigned(italic_font) = (0x00);
auto unsigned(underline_font) = (0x00);
auto unsigned(strikeout_font) = (0x00);
auto unsigned(charset_font) = (ANSI_CHARSET);
auto unsigned(outprecision_font) = (OUT_TT_ONLY_PRECIS);
auto unsigned(clipprecision_font) = (0x00);
auto unsigned(quality_font) = (0x00);
auto unsigned(pitchandfamily_font) = (0x00);
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
printf("%s\n", "<< cmdl_time runs.");
printf("%s\n", (signed char(*)) (argp));
//*/

/* Count the arguments */
r = ct_args(argp);

if(!r) {
printf("%s\n", "<< Error at fn. ct_args()");
return(XNOR(r));
}

/* **** Set the time */
if(r<(2)) {
secs = (DEFAULT_SECS);
}

else {
XOR(i, i);
c = (signed char) cv_lett(&i, argp);
if(!(c^(~(0x00)))) {
printf("%s\n", "<< Error at fn. cv_lett()");
return(XNOR(r));
}
// printf("%s%d\n", "i after fn. cv_lett() is: ", i);
secs = (i);
if(!secs) secs = (DEFAULT_SECS);
else secs = (secs%(LIMIT));
}

/* Screen Metrics */
*(scr+(X)) = GetSystemMetrics(SM_CXSCREEN);

if(!(*(scr+(X)))) {
printf("%s\n", "<< Error at GetSystemMetrics(SM_CXSCREEN).");
return(XNOR(r));
}

*(scr+(Y)) = GetSystemMetrics(SM_CYSCREEN);

if(!(*(scr+(Y)))) {
printf("%s\n", "<< Error at GetSystemMetrics(SM_CYSCREEN).");
return(XNOR(r));
}

*(region+(X)) = (*(scr+(X)));
*(region+(Y)) = (SHADE_YPOS+(height_font));

*(pos+(X)) = (0x00);
*(pos+(Y)) = (0x00);

/* Create/map the objects on the RAM */
*(obj+(REGION)) = (void(*)) CreateRectRgn(0x00, 0x00, *(region+(X)), *(region+(Y)));

if(!(*(obj+(REGION)))) {
printf("%s\n", "<< Error at CreateRectRgn()");
return(XNOR(r));
}
// else printf("%s%p\n", "The handle of a region object created/mapped on the RAM will be on offset ", *(obj+(REGION)));

*(obj+(BRUSH)) = (void(*)) CreateSolidBrush(SOLIDBRUSH);

if(!(*(obj+(BRUSH)))) {
printf("%s\n", "<< Error at CreateSolidBrush()");
return(XNOR(r));
}
// else printf("%s%p\n", "The handle of a brush object created/mapped on the RAM will be on offset ", *(obj+(BRUSH)));

*(obj+(FONT)) = (void(*)) CreateFont(
height_font, width_font, escapement_font, orientation_font, weight_font, \
italic_font, underline_font, strikeout_font, charset_font, outprecision_font, clipprecision_font, \
quality_font, pitchandfamily_font, (char signed*) facename_font
);

if(!(*(obj+(FONT)))) {
printf("%s\n", "<< Error at fn. CreateFont()");
return(XNOR(r));
}
// else printf("%s%p\n", "The handle of a font object created/mapped on the RAM will be on offset ", *(obj+(FONT)));

/* Create a bitmap object and two memory device contexts from the common DC */

*(dc+(CACHE)) = (void(*)) GetDC((void(*)) *(window+(ACTIVE)));

if(!(*(dc+(CACHE)))) {
printf("%s\n", "<< Error at GetDC()");
return(XNOR(r));
}
// else printf("%s%p\n", "The handle of the common device context mapped on the RAM will be on offset ", *(dc+(CACHE)));

i = (-1+(COUNT_DC));

while(i) {
*(dc+(--i)) = (void(*)) CreateCompatibleDC(*(dc+(CACHE)));
if(!(*(dc+(i)))) {
printf("%s\n", "<< Error at fn. CreateCompatibleDC()");
return(XNOR(r));
}
// else printf("%s%p\n", "The handle of a memory device context created/mapped on the RAM will be on offset ", *(dc+(i)));
}

*(obj+(BITMAP)) = (void(*)) CreateCompatibleBitmap(*(dc+(CACHE)), *(region+(X)), *(region+(Y)));

if(!(*(obj+(BITMAP)))) {
printf("%s\n", "<< Error at fn. CreateCompatibleBitmap()");
return(XNOR(r));
}
// else printf("%s%p\n", "The handle of a compatible bitmap object created/mapped on the RAM will be on offset ", *(obj+(BITMAP)));

// Unmap the common device context only.
r = ReleaseDC(*(window+(ACTIVE)), *(dc+(CACHE)));

if(!r) {
printf("%s\n", "<< Error at ReleaseDC()");
return(XNOR(r));
}

/* Get a handle of the module object (to load a bitmap file) */
*(module+(INSTANCE)) = (void(*)) GetModuleHandle((signed char(*)) 0x00);

if(!(*(module+(INSTANCE)))) {
printf("%s\n", "<< Error at fn. GetModuleHandle()");
return(XNOR(r));
}
// else printf("%s%p\n", "The handle of a module object created/mapped on the RAM will be on offset ", *(module+(INSTANCE)));

//* Optional
r = GetModuleFileName(*(module+(INSTANCE)), buff, BUFF);

if(!r) {
printf("%s\n", "<< Error at fn. GetModuleFileName()");
return(XNOR(r));
}
// else printf("%s%s\n", "The file name of a module object created/mapped on the RAM is: ", buff);
//*/

/* Get the file name of the desktop wallpaper to convert into the bitmap file format..
r = SystemParametersInfo(SPI_GETDESKWALLPAPER, BUFF, buff, 0x00);

if(!r) {
printf("%s\n", "<< Error at fn. SystemParametersInfo()");
printf("%s%d\n", "<< the r is: ", r);
return(XNOR(r));
}
// else printf("%s%s\n", "The path of the desktop wallpaper is ", buff);
//*/

/* Retrieve a handle of the object loaded (or mapped (or stored on the RAM)) from a bitmap file. */
/* e.g., the loaded, created or mapped objects ..are deleted.

*(obj+(LOADEDBITMAP)) = (void(*)) LoadImage(*(module+(INSTANCE)), bmp_filename, IMAGE_BITMAP, 0x00, 0x00, LR_LOADFROMFILE);

if(!(*(obj+(LOADEDBITMAP)))) {
printf("%s\n", "<< Error at fn. LoadImage()");
return(XNOR(r));
}
// else printf("%s%p\n", "The handle of a loaded bitmap object created/mapped on the RAM will be on offset ", *(obj+(LOADEDBITMAP)));
//*/

/* Selecting the created, loaded or mapped objects to two memory Device Context */
*(old_obj+(BRUSH)) = (void(*)) SelectObject(*(dc+(DI)), (void(*)) *(obj+(BRUSH)));

if(!(*(old_obj+(BRUSH)))) {
printf("%s\n", "<< Error at fn. SelectObject() of the Brush with the NULL.");
return(XNOR(r));
}
if(!((signed long long)HGDI_ERROR^ (signed long long) (*(old_obj+(BRUSH))))) {
printf("%s\n", "<< Error at fn. SelectObject() of the Brush with the HGDI_ERROR");
return(XNOR(r));
}

*(old_obj+(FONT)) = (void(*)) SelectObject(*(dc+(DI)), (void(*)) *(obj+(FONT)));

if(!(*(old_obj+(FONT)))) {
printf("%s\n", "<< Error at fn. SelectObject(FONT) with the NULL.");
return(XNOR(r));
}
if(!((signed long long)HGDI_ERROR^ (signed long long) (*(old_obj+(FONT))))) {
printf("%s\n", "<< Error at fn. SelectObject(FONT) with the HGDI_ERROR");
return(XNOR(r));
}

*(old_obj+(BITMAP)) = (void(*)) SelectObject(*(dc+(DI)), (void(*)) *(obj+(BITMAP)));

if(!(*(old_obj+(BITMAP)))) {
printf("%s\n", "<< Error at fn. SelectObject(BITMAP) with the NULL.");
return(XNOR(r));
}
if(!((signed long long)HGDI_ERROR^ (signed long long) (*(old_obj+(BITMAP))))) {
printf("%s\n", "<< Error at fn. SelectObject(BITMAP) with the HGDI_ERROR");
return(XNOR(r));
}

/* To (*(dc+(SI)))
*(old_obj+(LOADEDBITMAP)) = (void(*)) SelectObject(*(dc+(SI)), (void(*)) *(obj+(LOADEDBITMAP)));

if(!(*(old_obj+(LOADEDBITMAP)))) {
printf("%s\n", "<< Error at fn. SelectObject(LOADEDBITMAP) with the NULL.");
return(XNOR(r));
}
if(!((signed long long)HGDI_ERROR^ (signed long long) (*(old_obj+(LOADEDBITMAP))))) {
printf("%s\n", "<< Error at fn. SelectObject(LOADEDBITMAP) with the HGDI_ERROR");
return(XNOR(r));
}
//*/

/* Selecting before a loop */
old_bkcolor = SetBkColor(*(dc+(DI)), BKCOLOR);

if(!(old_bkcolor^(CLR_INVALID))) {
printf("%s\n", "<< Error at SetBkColor()");
return(XNOR(r));
}

old_bkmode = SetBkMode(*(dc+(DI)), BKMODE);

if(!old_bkmode) {
printf("%s\n", "<< Error at SetBkMode()");
return(XNOR(r));
}

/* **** !?
old_textalign = SetBkMode(*(dc+(DI)), TA_RIGHT);
if(!(old_textalign^(GDI_ERROR))) {
printf("%s\n", "<< Error at SetTextAlign()");
return(XNOR(r));
}
//*/

/* Go to a loop */
// printf("%s%d%s\n", "Please wait for about ", secs, " seconds or type --time to stop.");

XOR(l,l);

time(&t);
deadline = (time_t) (secs+(t));

/* Monitoring
printf("%s%zd\n", "deadline is: ", deadline);
printf("%s%zd\n", "Now this is: ", t);
//*/

/* A loop */
while(t<(deadline)) {

/* CPU idling */
Sleep(DELAY);

time(&t);

/* Check the toggle to stop */
if(!(cmdl_time_Toggle)) break;

/* Check the announcements to stop */
if(Announcements) break;

//* Fill the region on a back-screen buffer
r = FillRgn(*(dc+(DI)), (void(*)) *(obj+(REGION)), (void(*)) *(obj+(BRUSH)));

if(!r) {
printf("%s\n", "<< Error at FillRgn()");
return(XNOR(r));
}
//*/

/* Map a loaded bitmap image to a destination back-screen buffer out of a source back-screen (e.g., off-screen) buffer.
r = BitBlt(*(dc+(DI)), 0x00, 0x00, *(region+(X)), *(region+(Y)), *(dc+(SI)), 0x00, 0x00, SRCCOPY);

if(!r) {
printf("%s\n", "<< Error at fn. BitBlt()");
return(XNOR(r));
}
//*/

GetLocalTime(&st);

st.wMilliseconds = (st.wMilliseconds/(100));

sprintf(
buff, "%2d:%02d:%02d %01d %s %d %s %d", \
st.wHour, st.wMinute, st.wSecond, st.wMilliseconds, \
*(dayoftheweek+(st.wDayOfWeek)), st.wDay, *(month+(st.wMonth+(~(0x00)))), st.wYear
);


// 1st outputting
old_textcolor = SetTextColor(*(dc+(DI)), SHADE_TEXTCOLOR);
if(!(old_textcolor^(CLR_INVALID))) printf("%s\n", "<< Error at fn. SetTextColor()");

r = ct(buff);
if(!r) printf("%s\n", "<< Error at ct()");
else r = TextOut(*(dc+(DI)), SHADE_XPOS+(*(pos+(X))), SHADE_YPOS+(*(pos+(Y))), buff, r);

if(!r) printf("%s\n", "<< Error at fn. TextOut()");

old_textcolor = SetTextColor(*(dc+(DI)), old_textcolor);
if(!(old_textcolor^(CLR_INVALID))) printf("%s\n", "<< Error at fn. SetTextColor() to restore");


// 2nd outputting
old_textcolor = SetTextColor(*(dc+(DI)), TEXTCOLOR);
if(!(old_textcolor^(CLR_INVALID))) printf("%s\n", "<< Error at SetTextColor() the second");

r = ct(buff);
if(!r) printf("%s\n", "<< Error at ct()");
else r = TextOut(*(dc+(DI)), *(pos+(X)), *(pos+(Y)), buff, r);

if(!r) printf("%s\n", "<< Error at fn. TextOut() the second");

old_textcolor = SetTextColor(*(dc+(DI)), old_textcolor);
if(!(old_textcolor^(CLR_INVALID))) printf("%s\n", "<< Error at SetTextColor() the second to restore");


/* Transfer to the primary screen */
/* Getting and releasing a handle of the common Dedive Context to use in fn. BitBlt() */
*(dc+(CACHE)) = (void(*)) GetDC((void(*)) *(window+(ACTIVE)));

if(!(*(dc+(CACHE)))) {
printf("%s\n", "<< Error at GetDC()");
return(XNOR(r));
}
// else printf("%s%p\n", "The handle of the common device context mapped on the RAM will be on offset ", *(dc+(CACHE)));

r = BitBlt(*(dc+(CACHE)), 0x00, 0x00, *(region+(X)), *(region+(Y)), *(dc+(DI)), 0x00, 0x00, SRCCOPY);

if(!r) {
printf("%s\n", "<< Error at fn. BitBlt()");
return(XNOR(r));
}

r = ReleaseDC(*(window+(ACTIVE)), *(dc+(CACHE)));

if(!r) {
printf("%s\n", "<< Error at ReleaseDC()");
return(XNOR(r));
}}


/* **** **** De-selecting after a loop */
/* **** !?
old_textalign = SetBkMode(*(dc+(DI)), (old_textalign));
if(!(old_textalign^(GDI_ERROR))) printf("%s\n", "<< Error at fn. SetTextAlign() to restore");
//*/

old_bkmode = SetBkMode(*(dc+(DI)), (old_bkmode));
if(!old_bkmode) printf("%s\n", "<< Error at fn. SetBkMode() to restore");

old_bkcolor = SetBkColor(*(dc+(DI)), old_bkcolor);
if(!(old_bkcolor^(CLR_INVALID))) printf("%s\n", "<< Error at fn. SetBkColor() to restore");


/* De-selecting the handle of the loaded bitmap objects to a memory Device Context.
*(old_obj+(LOADEDBITMAP)) = (void(*)) SelectObject(*(dc+(SI)), (void(*)) *(old_obj+(LOADEDBITMAP)));

if(!(*(old_obj+(LOADEDBITMAP)))) {
printf("%s\n", "<< Error at fn. SelectObject to de-select a loaded bitmap to (*(dc+(SI)))");
return(XNOR(r));
}

if(!((signed long long) HGDI_ERROR^ (signed long long) (*(old_obj+(LOADEDBITMAP))))) {
printf("%s\n", "<< Error at fn. SelectObject to de-select a loaded bitmap to (*(dc+(SI))) with HGDI_ERROR");
return(XNOR(r));
}
//*/


// Except for the two objects i.e., a region object and a bitmap object loaded on (*(dc+(SI))) ---- Please look at the above process.
i = (-2+(COUNT_OBJS));

while(i) {
*(old_obj+(i)) = (void(*)) SelectObject(*(dc+(DI)), (void(*)) *(old_obj+(--i)));
if(!(*(old_obj+(i)))) {
printf("%s%d\n", "<< Error at fn. SelectObject to de-select and i is: ", i);
return(XNOR(r));
}
if(!((signed long long) HGDI_ERROR^ (signed long long) (*(old_obj+(i))))) {
printf("%s%d\n", "<< Error at fn. SelectObject to de-select with HGDI_ERROR and i is: ", i);
return(XNOR(r));
}}

/* Deleting/unmapping two memory Device Contexts on the RAM */
i = (-1+(COUNT_DC));

while(i) {
r = DeleteDC(*(dc+(--i)));
if(!r) {
printf("%s%d\n", "<< Error at fn. DeleteDC() and i is: ", i);
return(XNOR(r));
}}

/* **** **** Delete(, unload or unmap) all the objects mapped on the RAM */
/* **** Except a handle of the module object of the process to currently run on */
/* **** Should <an offset handle of the current module object returned by fn. GetModuleHandle()> be released..? */
/* Aux., except an <un-loaded> bitmap object: (-1) */
i = (-1+(COUNT_OBJS));

while(i) {
r = DeleteObject(*(obj+(--i)));
if(!r) {
printf("%s%d\n", "<< Error at fn. DeleteObject() and the i is: ", i);
return(XNOR(r));
}}

/* Monitoring
printf("All DONE!\n");
//*/

XOR(cmdl_time_Toggle, cmdl_time_Toggle);

--Running;
return(0x00);
}
