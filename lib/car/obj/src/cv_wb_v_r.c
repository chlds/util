/* **** Notes

Convert

Remarks:
Call fn. rl_vw later
Based on UTF-16 and UTF-8
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl cv_wb_v_r(signed short(**di),signed char(**si))) {
auto signed short *w;
if(!di) return(0x00);
if(!si) return(0x00);
w = (0x00);
*di = (w);
if(!(*si)) return(0x00);
if(!(cv_wb(&w,*si))) {
printf("%s \n","<< Error at fn. cv_wb()");
return(0x00);
}
*di = (w);
w = (0x00);
di++;
si++;
return(0x01+(cv_wb_v_r(di,si)));
}
