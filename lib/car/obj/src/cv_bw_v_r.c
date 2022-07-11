/* **** Notes

Convert into a table pointer of pointers secured for bytes in UTF-8

Remarks:
Call fn. rl_v later to release secured buffers at **di and at their contents
Based on UTF-16 and UTF-8
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl cv_bw_v_r(signed char(**di),signed short(**si))) {
auto signed char *b;
if(!di) return(0x00);
if(!si) return(0x00);
b = (0x00);
*di = (b);
if(!(*si)) return(0x00);
if(!(cv_bw(&b,*si))) {
printf("%s \n","<< Error at fn. cv_bw()");
return(0x00);
}
*di = (b);
b = (0x00);
di++;
si++;
return(0x01+(cv_bw_v_r(di,si)));
}
