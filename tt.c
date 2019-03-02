/* **** **** **** **** Notes


Please verify the code and use it if you like.


Please type the following commands to
make the (tt.exe) executable file to
run on the (CMD.exe) console in Windows 10 64-bit OS using Windows Kit.

cd incl/lib/
nmake L=<library-name-you-like>
cd ..
cd ..
nmake T=tt


Once you have created the library file, you
can create an (e.g., tt.exe) executable file
from the (i.e., tt.c) C source file on the directory using the following command.

nmake T=tt


Appendix I:

Or to build an (e.g., my.lib) library file on the (./incl/lib) directory, type the following command:

cd incl/lib/
cl -c *.c
lib -out:my.lib *.obj

and to build an (e.g., tt.exe) executable file from an (i.e., tt.c) C source file on the (util/) directory, type the following command:

cd ..
cd ..
cl -c tt.c
cl tt.obj ./incl/lib/*.lib user32.lib gdi32.lib

Or

cd ..
cd ..
cl -c tt.c
link tt.obj ./incl/lib/*.lib user32.lib gdi32.lib


Appendix II:

Please type like this when you want to overwrite the value of that LIBS, for example:

nmake T=tt LIBS="./incl/lib/*.lib user32.lib gdi32.lib"


Remarks:

Refer at path "./incl/decl/config.h", at <corecrt_wtime.h> or..


Flow:
----
----
Create/map all the Objects on the RAM
----
Select all the handlers of the created, loaded or mapped objects to the handlers of the memory device context
----
Get a handler of the common device context
Bit Block Transfer to the common DC
Release the handler of the common device context
----
Get a handler of the common device context
Bit Block Transfer to the common DC
Release the handler of the common device context
----
De-select all the handlers of the created, loaded or mapped objects out of the handlers of the memory device context
----
Delete/unmap all the Objects on the RAM
----
----


Design and Implementation e.g.,
double buffering(, off-screen or sprite),
alpha blending,
directly access using a vector table of the offset pointers,
dynamically secure an array of the offset pointers e.g., p = (char signed(*(*))) malloc(N*(sizeof(char signed(*))));,
cpu_idle
and more for an extensible code..

//*/


# define C_CODE_STDS
# define C_CALEND
# define C_MT

# define C_W32API


# define COUNT_MODULES (1)
# define COUNT_WINDOWS (1)
# define COUNT_OBJS (5)
# define COUNT_POS (4)
# define COUNT_DC (3)

# define DEFAULT_SECS (10)
# define BUFF (0x200)

# define SHR(A, B) ((A)>>(B))

# include "./incl/decl/config.h"


char signed(__cdecl main(char signed(argc), char signed(**argv), char signed(**envp))) {


// for the module handlers
enum {
INSTANCE
};

// for the window handlers
enum {
ACTIVE
};

// for the object handlers
// Be careful in the order (with fn. SelectOject() to de-select the 3 objects from and fn. DeleteObject() to delete the 4 ones from the bottom.)
enum {
FONT, BRUSH, BITMAP, REGION, LOADEDBITMAP
};

// for the handlers of the memory device context
enum {
SI, DI, CACHE
};

// for the co-ordinate
enum {
X, Y, OFFSET_X, OFFSET_Y
};


auto const int signed(LIMIT) = (int signed) (3600);
auto const int signed(DELAY) = (int signed) (20);

// Default
auto int signed(secs) = (int signed) (DEFAULT_SECS);
auto time_t(t), (deadline);

auto int unsigned(SOLIDBRUSH) = (int signed) (0xC09070);

auto int signed(old_bkmode), (old_bkcolor), (old_textcolor);
auto int unsigned(old_textalign);

auto const int signed(BKMODE) = (int signed) (TRANSPARENT);
auto const int signed(BKCOLOR) = (int signed) (0x000000);
auto const int signed(TEXTCOLOR) = (int signed) (0xF0F0F0);

auto const int signed(SHADE_TEXTCOLOR) = (int signed) (0x606060);
auto const int signed(SHADE_XPOS) = (int signed) (0x02);
auto const int signed(SHADE_YPOS) = (int signed) (0x02);


auto SYSTEMTIME(st);

auto RECT(rect) = {
(int long) (NIL)
};


auto char signed(*p);

auto char signed(bmp_filename[]) = ("./resource/bg.bmp");

auto char signed(buff[BUFF]) = {
(char signed) (NIL)
};


auto char signed(c);
auto int signed(i), (j), (l), (r), (z);


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


auto int unsigned(region[2]) = {
(int unsigned) (NIL)
};

auto int unsigned(scr[2]) = {
(int unsigned) (NIL)
};

auto int unsigned(pos[COUNT_POS]) = {
(int unsigned) (NIL)
};


auto int signed(height_font) = (36);
auto int signed(width_font) = (9);
auto int signed(escapement_font) = (NIL);
auto int signed(orientation_font) = (NIL);
auto int signed(weight_font) = (FW_REGULAR);
auto int unsigned(italic_font) = (NIL);
auto int unsigned(underline_font) = (NIL);
auto int unsigned(strikeout_font) = (NIL);
auto int unsigned(charset_font) = (ANSI_CHARSET);
auto int unsigned(outprecision_font) = (OUT_TT_ONLY_PRECIS);
auto int unsigned(clipprecision_font) = (NIL);
auto int unsigned(quality_font) = (NIL);
auto int unsigned(pitchandfamily_font) = (NIL);
auto char signed(facename_font[]) = ("Tahoma");




/* **** **** TEXT/CODE */


printf("\n%s%s", ("(*(argv+(argc+(~(NIL))))): "), (*(argv+(argc+(~(NIL))))));
printf("\n%s%d", ("argc: "), (argc));

if(argc<(2)) {
}

else {
p = (char signed(*)) (*(argv+(argc+(~(NIL)))));
c = (char signed) cv_ltrs(&i, (p));
if(!(c^(~(NIL)))) {
// Error
printf("\n%s", ("<< Error at fn. cv_ltrs()."));
return(char signed) (~(NIL));
}
secs = (int signed) (i);
if(!(secs)) {
secs = (int signed) (DEFAULT_SECS);
}
else {
secs = (secs%(LIMIT));
}}




(*(scr+(X))) = GetSystemMetrics(SM_CXSCREEN);

if(!(*(scr+(X)))) {
printf("\n%s", ("<< Error at GetSystemMetrics(SM_CXSCREEN)."));
return(char signed) (~(NIL));
}
else {
printf("\n%s%d", ("x pixels : "), (int unsigned) (*(scr+(X))));
}


(*(scr+(Y))) = GetSystemMetrics(SM_CYSCREEN);

if(!(*(scr+(Y)))) {
printf("\n%s", ("<< Error at GetSystemMetrics(SM_CYSCREEN)."));
return(char signed) (~(NIL));
}
else {
printf("\n%s%d", ("y pixels : "), (int unsigned) (*(scr+(Y))));
}




(*(region+(X))) = (int unsigned) (*(scr+(X)));
(*(region+(Y))) = (int unsigned) (SHADE_YPOS+(height_font));

(*(pos+(X))) = (int unsigned) (NIL);
(*(pos+(Y))) = (int unsigned) (NIL);




/* **** **** Create/map the objects on the RAM */


(*(obj+(REGION))) = (void(*)) CreateRectRgn(0, (0), (*(region+(X))), (*(region+(Y))));

if(!(*(obj+(REGION)))) {
printf("\n%s", ("<< Error at CreateRectRgn()."));
return(char signed) (~(NIL));
}
else {
// Monitoring
printf("\n%s%p", ("The handler of a region object created/mapped on the RAM will be on offset "), (*(obj+(REGION))));
}


(*(obj+(BRUSH))) = (void(*)) CreateSolidBrush(SOLIDBRUSH);

if(!(*(obj+(BRUSH)))) {
printf("\n%s", ("<< Error at CreateSolidBrush()."));
return(char signed) (~(NIL));
}
else {
// Monitoring
printf("\n%s%p", ("The handler of a brush object created/mapped on the RAM will be on offset "), (*(obj+(BRUSH))));
}


(*(obj+(FONT))) = (void(*)) CreateFont(
height_font, width_font, escapement_font, orientation_font, weight_font, \
italic_font, underline_font, strikeout_font, charset_font, outprecision_font, clipprecision_font, \
quality_font, pitchandfamily_font, (char signed*) (facename_font)
);

if(!(*(obj+(FONT)))) {
printf("\n%s", ("<< Error at fn. CreateFont()."));
return(char signed) (~(NIL));
}
else {
// Monitoring
printf("\n%s%p", ("The handler of a font object created/mapped on the RAM will be on offset "), (*(obj+(FONT))));
}


/* **** **** Create a bitmap object and two memory device contexts from the common DC */

(*(dc+(CACHE))) = (void(*)) GetDC((void(*)) (*(window+(ACTIVE))));

if(!(*(dc+(CACHE)))) {
printf("\n%s", ("<< Error at GetDC()."));
return(char signed) (~(NIL));
}
else {
// Monitoring
// printf("\n%s%p", ("The handler of the common device context mapped on the RAM will be on offset "), (*(dc+(CACHE))));
}

i = (int signed) (-1+(COUNT_DC));

while(i) {
(*(dc+(--i))) = (void(*)) CreateCompatibleDC(*(dc+(CACHE)));
if(!(*(dc+(i)))) {
printf("\n%s", ("<< Error at fn. CreateCompatibleDC()."));
return(char signed) (~(NIL));
}
else {
// Monitoring
printf("\n%s%p", ("The handler of a memory device context created/mapped on the RAM will be on offset "), (*(dc+(i))));
}}

(*(obj+(BITMAP))) = (void(*)) CreateCompatibleBitmap(*(dc+(CACHE)), (*(region+(X))), (*(region+(Y))));

if(!(*(obj+(BITMAP)))) {
printf("\n%s", ("<< Error at fn. CreateCompatibleBitmap()."));
return(char signed) (~(NIL));
}
else {
// Monitoring
printf("\n%s%p", ("The handler of a compatible bitmap object created/mapped on the RAM will be on offset "), (*(obj+(BITMAP))));
}

r = (int signed) ReleaseDC(*(window+(ACTIVE)), (*(dc+(CACHE))));

if(!(r)) {
printf("\n%s", ("<< Error at ReleaseDC()."));
return(char signed) (~(NIL));
}


/* **** **** Get a handler of the module object (to load a bitmap file) */

(*(module+(INSTANCE))) = (void(*)) GetModuleHandle((char signed(*)) (NIL));

if(!(*(module+(INSTANCE)))) {
printf("\n%s", ("<< Error at fn. GetModuleHandle()."));
return(char signed) (~(NIL));
}
else {
// Monitoring
printf("\n%s%p", ("The handler of a module object created/mapped on the RAM will be on offset "), (*(module+(INSTANCE))));
}


//* **** **** Optional

r = (int signed) GetModuleFileName(*(module+(INSTANCE)), (buff), (BUFF));
if(!(r)) {
printf("\n%s", ("<< Error at fn. GetModuleFileName()."));
return(char signed) (~(NIL));
}
else {
// Monitoring
printf("\n%s%s", ("The file name of a module object created/mapped on the RAM is: "), (buff));
}

//*/


/* **** Get the file name of the desktop wallpaper to convert into the bitmap file format..

r = (int signed) SystemParametersInfo(SPI_GETDESKWALLPAPER, BUFF, buff, (NIL));

if(!(r)) {
printf("\n%s", ("<< Error at fn. SystemParametersInfo()."));
printf("\n%s%d", ("<< the r is: "), (r));
return(char signed) (~(NIL));
}
else {
printf("\n%s%s", ("The path of the desktop wallpaper is "), (buff));
}

//*/



/* **** **** Retrieve a handle of the object loaded (or mapped (or stored on the RAM)) from a bitmap file. */

/* **** e.g., the loaded, created or mapped objects ..are deleted.

(*(obj+(LOADEDBITMAP))) = (void(*)) LoadImage(*(module+(INSTANCE)), (bmp_filename), (IMAGE_BITMAP), (0), (0), (LR_LOADFROMFILE));

if(!(*(obj+(LOADEDBITMAP)))) {
printf("\n%s", ("<< Error at fn. LoadImage()."));
return(char signed) (~(NIL));
}
else {
printf("\n%s%p", ("The handler of a loaded bitmap object created/mapped on the RAM will be on offset "), (*(obj+(LOADEDBITMAP))));
}

//*/


/* **** **** Selecting the created, loaded or mapped objects to two memory Device Context */

(*(old_obj+(BRUSH))) = (void(*)) SelectObject(*(dc+(DI)), (void(*)) (*(obj+(BRUSH))));

if(!(*(old_obj+(BRUSH)))) {
printf("\n%s", ("<< Error at fn. SelectObject() of the Brush with the NULL."));
return(char signed) (~(NIL));
}
if(!((int long long signed)HGDI_ERROR^ (int long long signed) (*(old_obj+(BRUSH))))) {
printf("\n%s", ("<< Error at fn. SelectObject() of the Brush with the HGDI_ERROR"));
return(char signed) (~(NIL));
}


(*(old_obj+(FONT))) = (void(*)) SelectObject(*(dc+(DI)), (void(*)) (*(obj+(FONT))));

if(!(*(old_obj+(FONT)))) {
printf("\n%s", ("<< Error at fn. SelectObject(FONT) with the NULL."));
return(char signed) (~(NIL));
}
if(!((int long long signed)HGDI_ERROR^ (int long long signed) (*(old_obj+(FONT))))) {
printf("\n%s", ("<< Error at fn. SelectObject(FONT) with the HGDI_ERROR"));
return(char signed) (~(NIL));
}


(*(old_obj+(BITMAP))) = (void(*)) SelectObject(*(dc+(DI)), (void(*)) (*(obj+(BITMAP))));

if(!(*(old_obj+(BITMAP)))) {
printf("\n%s", ("<< Error at fn. SelectObject(BITMAP) with the NULL."));
return(char signed) (~(NIL));
}
if(!((int long long signed)HGDI_ERROR^ (int long long signed) (*(old_obj+(BITMAP))))) {
printf("\n%s", ("<< Error at fn. SelectObject(BITMAP) with the HGDI_ERROR"));
return(char signed) (~(NIL));
}


/* **** **** To (*(dc+(SI)))

(*(old_obj+(LOADEDBITMAP))) = (void(*)) SelectObject(*(dc+(SI)), (void(*)) (*(obj+(LOADEDBITMAP))));

if(!(*(old_obj+(LOADEDBITMAP)))) {
printf("\n%s", ("<< Error at fn. SelectObject(LOADEDBITMAP) with the NULL."));
return(char signed) (~(NIL));
}
if(!((int long long signed)HGDI_ERROR^ (int long long signed) (*(old_obj+(LOADEDBITMAP))))) {
printf("\n%s", ("<< Error at fn. SelectObject(LOADEDBITMAP) with the HGDI_ERROR"));
return(char signed) (~(NIL));
}

//*/




/* **** **** Selecting before a loop */

old_bkcolor = SetBkColor(*(dc+(DI)), (BKCOLOR));
if(!(old_bkcolor^(CLR_INVALID))) {
printf("\n%s", ("<< Error at SetBkColor()."));
return(char signed) (~(NIL));
}

old_bkmode = SetBkMode(*(dc+(DI)), (BKMODE));
if(!(old_bkmode)) {
printf("\n%s", ("<< Error at SetBkMode()."));
return(char signed) (~(NIL));
}

/* **** !?
old_textalign = SetBkMode(*(dc+(DI)), (TA_RIGHT));
if(!(old_textalign^(GDI_ERROR))) {
printf("\n%s", ("<< Error at SetTextAlign()."));
return(char signed) (~(NIL));
}
//*/




/* **** **** A loop */

r = printf("\n\n%s%d%s\n", ("Please wait for about "), (secs), (" seconds or press <Ctrl-C> to stop."));

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


/* **** Saving..? */
if(z<(3)) {
(z++);
}
else {
time(&t);
z = (z^(z));
}


//* **** **** Fill

r = FillRgn(*(dc+(DI)), (void(*)) (*(obj+(REGION))), (void(*)) (*(obj+(BRUSH))));

if(!(r)) {
printf("\n%s", ("<< Error at FillRgn()."));
return(char signed) (~(NIL));
}
else {
}

//*/


/* **** Use the Bit Block Transfer to map the loaded bitmap image on an off-screen buffer

r = (int signed) BitBlt(*(dc+(DI)), 0, 0, (*(region+(X))), (*(region+(Y))), (*(dc+(SI))), 0, 0, SRCCOPY);
if(!(r)) {
printf("\n%s", ("<< Error at fn. BitBlt()."));
return(char signed) (~(NIL));
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
return(char signed) (~(NIL));
}


c = (char signed) ct_letters(&r, (buff));
if(!(c^(~(NIL)))) {
printf("\n%s", ("<< Error at ct_letters()."));
// return(char signed) (~(NIL));
}
else {
r = TextOut(*(dc+(DI)), (SHADE_XPOS+(*(pos+(X)))), (SHADE_YPOS+(*(pos+(Y)))), (buff), (r));
if(!(r)) {
printf("\n%s", ("<< Error at fn. TextOut()."));
// return(char signed) (~(NIL));
}}


old_textcolor = SetTextColor(*(dc+(DI)), (old_textcolor));

if(!(old_textcolor^(CLR_INVALID))) {
printf("\n%s", ("<< Error at SetTextColor()."));
return(char signed) (~(NIL));
}


// 2nd outputting

old_textcolor = SetTextColor(*(dc+(DI)), (TEXTCOLOR));

if(!(old_textcolor^(CLR_INVALID))) {
printf("\n%s", ("<< Error at SetTextColor()."));
return(char signed) (~(NIL));
}


c = (char signed) ct_letters(&r, (buff));
if(!(c^(~(NIL)))) {
printf("\n%s", ("<< Error at ct_letters()."));
// return(char signed) (~(NIL));
}
else {
r = TextOut(*(dc+(DI)), (*(pos+(X))), (*(pos+(Y))), (buff), (r));
if(!(r)) {
printf("\n%s", ("<< Error at fn. TextOut()."));
// return(char signed) (~(NIL));
}}


old_textcolor = SetTextColor(*(dc+(DI)), (old_textcolor));

if(!(old_textcolor^(CLR_INVALID))) {
printf("\n%s", ("<< Error at SetTextColor()."));
return(char signed) (~(NIL));
}




/* **** **** Getting and releasing a handler of the common Dedive Context to use in fn. BitBlt() */

(*(dc+(CACHE))) = (void(*)) GetDC((void(*)) (*(window+(ACTIVE))));

if(!(*(dc+(CACHE)))) {
printf("\n%s", ("<< Error at GetDC()."));
return(char signed) (~(NIL));
}
else {
// Monitoring
// printf("\n%s%p", ("The handler of the common device context mapped on the RAM will be on offset "), (*(dc+(CACHE))));
}

r = (int signed) BitBlt(*(dc+(CACHE)), 0, 0, (*(region+(X))), (*(region+(Y))), (*(dc+(DI))), 0, 0, SRCCOPY);

if(!(r)) {
printf("\n%s", ("<< Error at fn. BitBlt()."));
return(char signed) (~(NIL));
}

r = (int signed) ReleaseDC(*(window+(ACTIVE)), (*(dc+(CACHE))));

if(!(r)) {
printf("\n%s", ("<< Error at ReleaseDC()."));
return(char signed) (~(NIL));
}}






/* **** **** De-selecting after a loop */

/* **** !?
old_textalign = SetBkMode(*(dc+(DI)), (old_textalign));
if(!(old_textalign^(GDI_ERROR))) {
printf("\n%s", ("<< Error at SetTextAlign()."));
return(char signed) (~(NIL));
}
//*/

old_bkmode = SetBkMode(*(dc+(DI)), (old_bkmode));
if(!(old_bkmode)) {
printf("\n%s", ("<< Error at SetBkMode()."));
return(char signed) (~(NIL));
}

old_bkcolor = SetBkColor(*(dc+(DI)), (old_bkcolor));
if(!(old_bkcolor^(CLR_INVALID))) {
printf("\n%s", ("<< Error at SetBkColor()."));
return(char signed) (~(NIL));
}




/* **** **** De-selecting the handler of the loaded bitmap objects to a memory Device Context.

(*(old_obj+(LOADEDBITMAP))) = (void(*)) SelectObject(*(dc+(SI)), (void(*)) (*(old_obj+(LOADEDBITMAP))));
if(!(*(old_obj+(LOADEDBITMAP)))) {
printf("\n%s", ("<< Error at fn. SelectObject to de-select a loaded bitmap to (*(dc+(SI)))."));
return(char signed) (~(NIL));
}
if(!((int long long signed) HGDI_ERROR^ (int long long signed) (*(old_obj+(LOADEDBITMAP))))) {
printf("\n%s", ("<< Error at fn. SelectObject to de-select a loaded bitmap to (*(dc+(SI))) with HGDI_ERROR."));
return(char signed) (~(NIL));
}

//*/


// Except the two objects i.e., a region object and a bitmap object loaded on (*(dc+(SI))) ---- Please look at the above process.

i = (int signed) (-2+(COUNT_OBJS));

while(i) {
(*(old_obj+(i))) = (void(*)) SelectObject(*(dc+(DI)), (void(*)) (*(old_obj+(--i))));
if(!(*(old_obj+(i)))) {
printf("\n%s%d", ("<< Error at fn. SelectObject to de-select and the i is: "), (i));
return(char signed) (~(NIL));
}
if(!((int long long signed) HGDI_ERROR^ (int long long signed) (*(old_obj+(i))))) {
printf("\n%s%d", ("<< Error at fn. SelectObject to de-select with HGDI_ERROR and the i is: "), (i));
return(char signed) (~(NIL));
}}




/* **** **** Deleting/unmapping two memory Device Contexts on the RAM */

i = (int signed) (-1+(COUNT_DC));

while(i) {
r = (int signed) DeleteDC(*(dc+(--i)));
if(!(r)) {
printf("\n%s%d", ("<< Error at fn. DeleteDC() and the r is: "), (r));
printf("\n%s%d", ("<< Error at fn. DeleteDC() and the i is: "), (i));
return(char signed) (~(NIL));
}
else {
}}




/* **** **** **** **** Delete(, unload or unmap) all the objects mapped on the RAM */
/* **** **** Except a handler of the module object of the process to currently run on */
/* **** **** Release a handler of the current <module> object returned by fn. GetModuleHandle()..? */
/* Aux., except an <un-loaded> bitmap object: (-1) */

i = (int signed) (-1+(COUNT_OBJS));

while(i) {
r = (int signed) DeleteObject(*(obj+(--i)));
if(!(r)) {
printf("\n%s%d", ("<< Error at fn. DeleteObject() and the i is: "), (i));
return(char signed) (~(NIL));
}}




printf("\nAll DONE!");


return(char signed) (NIL);
}
