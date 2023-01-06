/*

Decode bytes into characters based on UTF-16
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl decode_wb(signed short(**di),signed char(*si))) {
auto signed short w;
if(!di) return(0x00);
if(*di) return(0x00);
if(!si) return(0x00);
AND(w,0x00);
if(!(*si)) {
if(!(cat_ww(di,w))) printf("%s \n","<< Error at fn. cat_ww()");
return(0x00);
}
return(decode_wb_r(di,si));
}
