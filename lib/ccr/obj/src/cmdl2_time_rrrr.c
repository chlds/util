/* **** Notes

Commandlet to output the local time

Remarks:
Transparency
*/

# define C_CODE_STDS
# define C_W32API
# define CALEND
# define CCR

# define COUNT_MODULES (1)
# define COUNT_WINDOWS (1)
# define COUNT_OBJS (5)
# define COUNT_POS (4)
# define COUNT_DC (3)

# define BUFF (0x200)

# include "../../../incl/config.h"

# include <objbase.h> // for combaseapi.h
# include <wincodec.h>
# include <wincodecsdk.h>
# pragma comment(lib, "windowscodecs.lib")

unsigned(__stdcall cmdl2_time_rrrr(SAT(*argp))) {

// for the module handles
enum {
INSTANCE,
};

// for the window handles
enum {
ACTIVE,
};

// for the object handles
// Be careful in the order (with fn. SelectOject() to de-select the 3 objects from and fn. DeleteObject() to delete the 4 ones from the bottom.)
enum {
FONT,BRUSH,REGION,BITMAP,LOADEDBITMAP,
};

// for the co-ordinate
enum {
X,Y,OFFSET_X,OFFSET_Y,
};

// Default
auto time_t deadline,t,zzz;

auto signed old_bkmode,old_bkcolor,old_textcolor;
auto unsigned old_textalign;

auto signed const BKMODE = (TRANSPARENT);
auto signed const BKCOLOR = (0x000000);

auto signed const SHADE_XPOS = (0x02);
auto signed const SHADE_YPOS = (0x02);

// 0/4. transparency
auto signed LACE = (0x8F8F8F);

// dark
auto signed SOLIDBRUSH = (0x404040);
auto signed SHADE_TEXTCOLOR = (0x303030|(SOLIDBRUSH));
auto signed TEXTCOLOR = (0x808080|(SHADE_TEXTCOLOR));

auto SYSTEMTIME st;

auto RECT rect = {
(long) (0x00),
};

auto signed char *p;
auto signed char bmp_filename[] = ("./resource/bg.bmp");

auto signed char buff[BUFF] = {
(signed char) (0x00),
};

auto void *(module[COUNT_MODULES]) = {
(void(*)) (0x00),
};

auto void *(window[COUNT_WINDOWS]) = {
(void(*)) (0x00),
};

auto void *(old_obj[COUNT_OBJS]) = {
(void(*)) (0x00),
};

auto void *(obj[COUNT_OBJS]) = {
(void(*)) (0x00),
};

auto void *(old_bm[COUNT_DC]) = {
(void(*)) (0x00),
};

auto void *(bm[COUNT_DC]) = {
(void(*)) (0x00),
};

auto void *(dc[COUNT_DC]) = {
(void(*)) (0x00),
};

auto unsigned region[2] = {
(unsigned) (0x00),
};

auto unsigned scr[2] = {
(unsigned) (0x00),
};

auto unsigned pos[COUNT_POS] = {
(unsigned) (0x00),
};

// 1/4. transparency
auto void *lace = (0x00);

auto signed height_font = (21);
auto signed width_font = (7);
auto signed escapement_font = (0x00);
auto signed orientation_font = (0x00);
auto signed weight_font = (FW_REGULAR);
auto unsigned italic_font = (0x00);
auto unsigned underline_font = (0x00);
auto unsigned strikeout_font = (0x00);
auto unsigned charset_font = (ANSI_CHARSET);
auto unsigned outprecision_font = (OUT_TT_ONLY_PRECIS);
auto unsigned clipprecision_font = (0x00);
auto unsigned quality_font = (0x00);
auto unsigned pitchandfamily_font = (0x00);
auto signed char facename_font[] = ("Tahoma");

auto KNOT *cache,*lead,*base;

auto signed period;
auto signed i,l,r;
auto signed short flag;
auto signed char c;

auto signed const QUANTUM = (0x10);
auto signed const SNOOZE = (0x04);
auto signed const DELAY = (0x03*(QUANTUM));

if(!argp) return(0x00);

/* Screen Metrics */
*(scr+(X)) = GetSystemMetrics(SM_CXSCREEN);
if(!(*(scr+(X)))) {
printf("%s \n","<< Error at GetSystemMetrics(SM_CXSCREEN).");
return(0x00);
}

*(scr+(Y)) = GetSystemMetrics(SM_CYSCREEN);
if(!(*(scr+(Y)))) {
printf("%s \n","<< Error at GetSystemMetrics(SM_CYSCREEN).");
return(0x00);
}

*(region+(X)) = (*(scr+(X)));
*(region+(Y)) = (SHADE_YPOS+(height_font));

*(pos+(X)) = (0x00);
*(pos+(Y)) = (0x00);

/* Map objects on the RAM */
*(obj+(REGION)) = (void(*)) CreateRectRgn(0x00,0x00,*(region+(X)),*(region+(Y)));
if(!(*(obj+(REGION)))) {
printf("%s \n","<< Error at CreateRectRgn()");
return(0x00);
}
// else printf("%s%p \n","The handle of a region object created/mapped on the RAM will be on offset ",*(obj+(REGION)));

*(obj+(BRUSH)) = (void(*)) CreateSolidBrush(SOLIDBRUSH);
if(!(*(obj+(BRUSH)))) {
printf("%s \n","<< Error at CreateSolidBrush()");
return(0x00);
}
// else printf("%s%p \n","The handle of a brush object created/mapped on the RAM will be on offset ",*(obj+(BRUSH)));

// 2/4. transparency
lace = (void(*)) CreateSolidBrush(LACE);
if(!lace) {
printf("%s \n","<< Error at CreateSolidBrush() for lace..");
return(0x00);
}

*(obj+(FONT)) = (void(*)) CreateFont(
height_font,width_font,escapement_font,orientation_font,weight_font,\
italic_font,underline_font,strikeout_font,charset_font,outprecision_font,clipprecision_font,\
quality_font,pitchandfamily_font,(char signed*) facename_font
);
if(!(*(obj+(FONT)))) {
printf("%s \n","<< Error at fn. CreateFont()");
return(0x00);
}
// else printf("%s%p \n","The handle of a font object created/mapped on the RAM will be on offset ",*(obj+(FONT)));

/* Retrieve a handle to the desktop window */
*(window+(ACTIVE)) = GetDesktopWindow();

/* Create a bitmap object and two memory device contexts from the common DC */
*(CLI_CACHE+(dc)) = (void(*)) GetDC((void(*)) *(window+(ACTIVE)));
if(!(*(CLI_CACHE+(dc)))) {
printf("%s \n","<< Error at GetDC()");
return(0x00);
}
// else printf("%s%p \n","The handle of the common device context mapped on the RAM will be on offset ",*(CLI_CACHE+(dc)));

i = (-1+(COUNT_DC));
while(i) {
*(dc+(--i)) = (void(*)) CreateCompatibleDC(*(CLI_CACHE+(dc)));
if(!(*(dc+(i)))) {
printf("%s \n","<< Error at fn. CreateCompatibleDC()");
return(0x00);
}
// else printf("%s%p \n","The handle of a memory device context created/mapped on the RAM will be on offset ",*(dc+(i)));
}

i = (-1+(COUNT_DC));
while(i) {
*(bm+(--i)) = (void(*)) CreateCompatibleBitmap(*(CLI_CACHE+(dc)),*(region+(X)),*(region+(Y)));
if(!(*(bm+(i)))) {
printf("%s \n","<< Error at fn. CreateCompatibleBitmap()");
return(0x00);
}
// else printf("%s%p \n","The handle of a compatible bitmap object created/mapped on the RAM will be on offset ",*(bm+(i)));
}

// Unmap the common device context only.
r = ReleaseDC(*(window+(ACTIVE)),*(CLI_CACHE+(dc)));
if(!r) {
printf("%s \n","<< Error at ReleaseDC()");
return(0x00);
}

/* Get a handle of the module object (to load a bitmap file) */
*(module+(INSTANCE)) = (void(*)) GetModuleHandle((signed char(*)) 0x00);
if(!(*(module+(INSTANCE)))) {
printf("%s \n","<< Error at fn. GetModuleHandle()");
return(0x00);
}
// else printf("%s%p\n","The handle of a module object created/mapped on the RAM will be on offset ",*(module+(INSTANCE)));

//* Optional
r = GetModuleFileName(*(module+(INSTANCE)),buff,BUFF);
if(!r) {
printf("%s \n","<< Error at fn. GetModuleFileName()");
return(0x00);
}
// else printf("%s%s\n","The file name of a module object created/mapped on the RAM is: ",buff);
//*/

/* Get the file name of the desktop wallpaper to convert into the bitmap file format..
r = SystemParametersInfo(SPI_GETDESKWALLPAPER,BUFF,buff,0x00);
if(!r) {
printf("%s \n","<< Error at fn. SystemParametersInfo()");
printf("%s%d \n","<< the r is: ",r);
return(0x00);
}
// else printf("%s%s \n","The path of the desktop wallpaper is ",buff);
//*/

/* Retrieve a handle of the object loaded (or mapped (or stored on the RAM)) from a bitmap file. */
/* e.g., the loaded, created or mapped objects ..are deleted.

*(obj+(LOADEDBITMAP)) = (void(*)) LoadImage(*(module+(INSTANCE)),bmp_filename,IMAGE_BITMAP,0x00,0x00,LR_LOADFROMFILE);
if(!(*(obj+(LOADEDBITMAP)))) {
printf("%s \n","<< Error at fn. LoadImage()");
return(0x00);
}
// else printf("%s%p \n","The handle of a loaded bitmap object created/mapped on the RAM will be on offset ",*(obj+(LOADEDBITMAP)));
//*/


/* Selecting the created, loaded or mapped objects to two memory Device Context */
*(old_obj+(BRUSH)) = (void(*)) SelectObject(*(CLI_DI+(dc)),(void(*)) *(obj+(BRUSH)));

if(!(*(old_obj+(BRUSH)))) {
printf("%s \n","<< Error at fn. SelectObject() of the Brush with the NULL.");
return(0x00);
}
if(EQ(HGDI_ERROR,*(old_obj+(BRUSH)))) {
printf("%s \n","<< Error at fn. SelectObject() of the Brush with the HGDI_ERROR");
return(0x00);
}

*(old_obj+(FONT)) = (void(*)) SelectObject(*(CLI_DI+(dc)),(void(*)) *(obj+(FONT)));
if(!(*(old_obj+(FONT)))) {
printf("%s \n","<< Error at fn. SelectObject(FONT) with the NULL.");
return(0x00);
}
if(EQ(HGDI_ERROR,*(old_obj+(FONT)))) {
printf("%s \n","<< Error at fn. SelectObject(FONT) with the HGDI_ERROR");
return(0x00);
}

i = (-0x01+(COUNT_DC));
while(i) {
--i;
*(old_bm+(i)) = (void(*)) SelectObject(*(dc+(i)),(void(*)) *(bm+(i)));
if(!(*(old_bm+(i)))) {
printf("%s \n","<< Error at fn. SelectObject(BITMAP) with the NULL.");
return(0x00);
}
if(EQ(HGDI_ERROR,*(old_bm+(i)))) {
printf("%s \n","<< Error at fn. SelectObject(BITMAP) with the HGDI_ERROR");
return(0x00);
}}

/* To (*(CLI_SI+(dc)))
*(old_obj+(LOADEDBITMAP)) = (void(*)) SelectObject(*(CLI_SI+(dc)),(void(*)) *(obj+(LOADEDBITMAP)));
if(!(*(old_obj+(LOADEDBITMAP)))) {
printf("%s \n","<< Error at fn. SelectObject(LOADEDBITMAP) with the NULL.");
return(0x00);
}
if(EQ(HGDI_ERROR,*(old_obj+(LOADEDBITMAP)))) {
printf("%s \n","<< Error at fn. SelectObject(LOADEDBITMAP) with the HGDI_ERROR");
return(0x00);
}
//*/

/* Selecting before a loop */
old_bkcolor = SetBkColor(*(CLI_DI+(dc)),BKCOLOR);
if(!(old_bkcolor^(CLR_INVALID))) {
printf("%s \n","<< Error at SetBkColor()");
return(0x00);
}

old_bkmode = SetBkMode(*(CLI_DI+(dc)),BKMODE);
if(!old_bkmode) {
printf("%s \n","<< Error at SetBkMode()");
return(0x00);
}

/* **** !?
old_textalign = SetBkMode(*(CLI_DI+(dc)),TA_RIGHT);
if(!(old_textalign^(GDI_ERROR))) {
printf("%s \n","<< Error at SetTextAlign()");
return(0x00);
}
//*/

/* Go to a loop */
period = (R(period,*argp));
// printf("%s %d %s \n","Please wait for about",period,"seconds or type --time to stop.");

XOR(l,l);

time(&t);
deadline = (time_t) (period+(t));

/* Monitoring
printf("%s %zu \n","deadline:",deadline);
printf("%s %zu \n","now:",t);
//*/

/* A loop */
AND(flag,0x00);
*buff = (0x00);
while(t<(deadline)) {
if(R(announce,*argp)) break;
if(!(R(toggle,*argp))) break;
if(flag) sleep_b(3000);
/* CPU idling */
Sleep(DELAY);
time(&t);
zzz = (-t+(deadline));
// One second: Get and release a handle of the common device context to transfer a bit block to an off-screen buffer.
AND(flag,0x00);
if(!(transcribe_to_beta(*(region+(X)),*(region+(Y)),*(CLI_DI+(dc)),*(window+(ACTIVE))))) {
printf("%s \n","<< Error at fn. transcribe_to_beta()");
OR(flag,0x01);
}
if(!flag) {
// correct outputting
if(!(text_out_beta(*(CLI_DI+(dc)),SHADE_XPOS+(*(pos+(X))),SHADE_YPOS+(*(pos+(Y))),buff,ct(buff),TEXTCOLOR))) {
printf("%s \n","<< Error at fn. text_out_beta()");
}
// 3/4. transparency
//* Fill the region on a back-screen buffer
if(!(FillRgn(*(CLI_SI+(dc)),(void(*)) *(obj+(REGION)),(void*)lace))) {
printf("%s \n","<< Error at FillRgn()");
break;
}
//*/
//* Map a loaded bitmap image to a destination back-screen buffer out of a source back-screen (e.g., off-screen) buffer.
if(!(BitBlt(*(CLI_DI+(dc)),0x00,0x00,*(region+(X)),*(region+(Y)),*(CLI_SI+(dc)),0x00,0x00,SRCAND))) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. BitBlt() with error no.",r,"or",r);
OR(flag,0x01);
}
//*/
GetLocalTime(&st);
st.wMilliseconds = (st.wMilliseconds/(100));
sprintf(
buff,\
"%s %d %s %d,  %d:%02d:%02d %01d  |  %zd%s ",\
*(DAYOFTHEWEEK+(st.wDayOfWeek)),st.wDay,*(MONTH+(st.wMonth+(~(0x00)))),st.wYear,\
st.wHour,st.wMinute,st.wSecond,st.wMilliseconds,\
zzz,"\" left"
);
// 1st outputting
if(!(text_out_beta(*(CLI_DI+(dc)),SHADE_XPOS+(*(pos+(X))),SHADE_YPOS+(*(pos+(Y))),buff,ct(buff),SHADE_TEXTCOLOR))) {
printf("%s \n","<< Error at fn. text_out_beta()");
}
// 2nd outputting
if(!(text_out_beta(*(CLI_DI+(dc)),*(pos+(X)),*(pos+(Y)),buff,ct(buff),TEXTCOLOR))) {
printf("%s \n","<< Error at fn. text_out_beta() the second");
}
// Two seconds: Get and release a handle of the common device context to transfer a bit block to the primary screen.
if(!flag) {
if(!(transcribe_beta(*(region+(X)),*(region+(Y)),*(window+(ACTIVE)),*(CLI_DI+(dc))))) {
printf("%s \n","<< Error at fn. transcribe_beta()");
OR(flag,0x01);
}}}}


/* **** **** De-selecting after a loop */
/* **** !?
old_textalign = SetBkMode(*(CLI_DI+(dc)),old_textalign);
if(!(old_textalign^(GDI_ERROR))) printf("%s \n","<< Error at fn. SetTextAlign() to restore");
//*/

old_bkmode = SetBkMode(*(CLI_DI+(dc)),old_bkmode);
if(!old_bkmode) printf("%s \n","<< Error at fn. SetBkMode() to restore");

old_bkcolor = SetBkColor(*(CLI_DI+(dc)),old_bkcolor);
if(!(old_bkcolor^(CLR_INVALID))) printf("%s \n","<< Error at fn. SetBkColor() to restore");

/* De-selecting the handle of the loaded bitmap objects to a memory Device Context.
*(old_obj+(LOADEDBITMAP)) = (void(*)) SelectObject(*(CLI_SI+(dc)), (void(*)) *(old_obj+(LOADEDBITMAP)));
if(!(*(old_obj+(LOADEDBITMAP)))) {
printf("%s \n","<< Error at fn. SelectObject to de-select a loaded bitmap to (*(CLI_SI+(dc)))");
return(0x00);
}
if(EQ(HGDI_ERROR,*(old_obj+(LOADEDBITMAP)))) {
printf("%s \n","<< Error at fn. SelectObject to de-select a loaded bitmap to (*(CLI_SI+(dc))) with HGDI_ERROR");
return(0x00);
}
//*/

// De-select compatible bitmap objects out of the compatible device contexts i.e., Mem. DC.
i = (-0x01+(COUNT_DC));
while(i) {
--i;
*(old_bm+(i)) = (void(*)) SelectObject(*(dc+(i)),(void(*)) *(old_bm+(i)));
if(!(*(old_bm+(i)))) {
printf("%s%d \n","<< Error at fn. SelectObject to de-select a compatible bitmap object and i is: ",i);
return(0x00);
}
if(EQ(HGDI_ERROR,*(old_bm+(i)))) {
printf("%s%d \n","<< Error at fn. SelectObject to de-select a compatible bitmap object with HGDI_ERROR and i is: ",i);
return(0x00);
}}

/* De-select two objects out of the compatible device context */
// i = (-2+(COUNT_OBJS));
i = (0x02); // i.e., BRUSH and FONT..
while(i) {
*(old_obj+(i)) = (void(*)) SelectObject(*(CLI_DI+(dc)), (void(*)) *(old_obj+(--i)));
if(!(*(old_obj+(i)))) {
printf("%s%d \n","<< Error at fn. SelectObject to de-select and i is: ",i);
return(0x00);
}
if(EQ(HGDI_ERROR,*(old_obj+(i)))) {
printf("%s%d \n","<< Error at fn. SelectObject to de-select with HGDI_ERROR and i is: ",i);
return(0x00);
}}

/* Deleting/unmapping two compatible bitmap objects on the RAM */
i = (-1+(COUNT_DC));
while(i) {
r = DeleteObject(*(bm+(--i)));
if(!r) {
printf("%s%d \n","<< Error at fn. DeleteObject() to unmap a compatible bitmap object and i is: ",i);
return(0x00);
}}

/* Deleting/unmapping two memory Device Contexts on the RAM */
i = (-1+(COUNT_DC));
while(i) {
r = DeleteDC(*(dc+(--i)));
if(!r) {
printf("%s%d \n","<< Error at fn. DeleteDC() and i is: ",i);
return(0x00);
}}

// 4/4. transparency
r = DeleteObject(lace);
if(!r) {
printf("%s \n","<< Error at fn. DeleteObject() for lace..");
return(0x00);
}

/* **** **** Delete(, unload or unmap) all the objects mapped on the RAM */
/* **** Except a handle of the module object of the process to currently run on */
/* **** Should <an offset handle of the current module object returned by fn. GetModuleHandle()> be released..? */
/* Aux., except an <un-loaded> bitmap object: (-1) */

// i = (-1+(COUNT_OBJS));
i = (0x03); // i.e., REGION, BRUSH and FONT..
while(i) {
r = DeleteObject(*(obj+(--i)));
if(!r) {
printf("%s%d \n","<< Error at fn. DeleteObject() and the i is: ",i);
return(0x00);
}}

return(0x01);
}
