/* **** Notes

Commandlet to output the local time

Remarks:
Transparency
*/


# define DUAL_CONFIG_H
# define CAR_H
# define CAW_H
# define SAT_H
# define STDIO_H
# define STDLIB_H
# define WIN32_H
# define CALEND
# define CAR
# include "./../../../incl/config.h"
# include "./../../../config.h"

# define COUNT_MODULES (1)
# define COUNT_OBJS (5)
# define COUNT_POS (4)
# define BUFF (0x200)
# include <objbase.h> // for combaseapi.h
# include <wincodec.h>
# include <wincodecsdk.h>
# pragma comment(lib, "windowscodecs.lib")

signed(__cdecl cmdl2_time_rrrr(SAT(*argp))) {

// for the module handles
enum {
INSTANCE,
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

auto void *(old_obj[COUNT_OBJS]) = {
(void(*)) (0x00),
};

auto void *(obj[COUNT_OBJS]) = {
(void(*)) (0x00),
};

auto unsigned region[2] = {
(unsigned) (0x00),
};

auto unsigned pos[COUNT_POS] = {
(unsigned) (0x00),
};

auto void **dc;
auto void **bm;
auto void *desktop;

// transparency
auto void *lace;
auto void *rgn;
auto KNOT *cache,*lead,*base;

auto signed period;
auto signed i,l,r;
auto signed short flag;
auto signed char c;

auto signed const QUANTUM = (0x10);
auto signed const SNOOZE = (0x04);
auto signed const DELAY = (0x03*(QUANTUM));

if(!argp) return(0x00);

r = currently_operating_pixels(0x00);
*(region+(X)) = (r);
*(region+(Y)) = (SHADE_YPOS+(R(height,R(font,*argp))));
*(pos+(X)) = (0x00);
*(pos+(Y)) = (0x00);

/* Map objects on the RAM */
rgn = (*(CLI_BASE+(R(region,*argp))));
if(!rgn) return(0x00);

// transparency
lace = (*(CLI_OFFSET+(R(brush,*argp))));
if(!lace) return(0x00);

desktop = GetDesktopWindow();
dc = (R(dc,*argp));
bm = (R(bm,*argp));

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


/* To (*(CLI_SI+(dc)))
*(old_obj+(LOADEDBITMAP)) = select_object_beta(*(CLI_SI+(dc)),*(obj+(LOADEDBITMAP)));
if(!(*(old_obj+(LOADEDBITMAP)))) {
printf("%s \n","<< Error at fn. select_object_beta() for a loadedbitmap");
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
if(flag) sleep_beta(3000);
/* CPU idling */
sleep_beta(DELAY);
time(&t);
zzz = (-t+(deadline));
// One second: Get and release a handle of the common device context to transfer a bit block to an off-screen buffer.
AND(flag,0x00);
if(!(transcribe_dh_beta(*(region+(X)),*(region+(Y)),*(CLI_DI+(dc)),desktop))) {
printf("%s \n","<< Error at fn. transcribe_dh_beta()");
OR(flag,0x01);
}
if(!flag) {
// correct outputting
if(!(text_out_beta(*(CLI_DI+(dc)),SHADE_XPOS+(*(pos+(X))),SHADE_YPOS+(*(pos+(Y))),buff,ct(buff),TEXTCOLOR))) {
printf("%s \n","<< Error at fn. text_out_beta()");
}
// 3/4. transparency
//* Fill the region on a back-screen buffer
if(!(FillRgn(*(CLI_SI+(dc)),(void*)rgn,(void*)lace))) {
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
if(!(transcribe_hd_beta(*(region+(X)),*(region+(Y)),desktop,*(CLI_DI+(dc))))) {
printf("%s \n","<< Error at fn. transcribe_hd_beta()");
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
*(old_obj+(LOADEDBITMAP)) = select_object_beta(*(CLI_SI+(dc)),*(old_obj+(LOADEDBITMAP)));
if(!(*(old_obj+(LOADEDBITMAP)))) {
printf("%s \n","<< Error at fn. select_object_beta for a loaded bitmap object");
return(0x00);
}
//*/

return(0x01);
}
