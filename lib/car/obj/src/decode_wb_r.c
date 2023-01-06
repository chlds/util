/*

Decode bytes into characters based on UTF-16
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl decode_wb_r(signed short(**di),signed char(*si))) {
auto signed i,r;
auto signed short w;
if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) return(0x00);
r = decode_b(&i,si);
si = (r+(si));
if(!r) {
printf("%s \n","<< Error at fn. decode_b()");
return(0x00);
}
if(!(0x03<(r))) {
w = (signed short) (i);
if(!(cat_ww(di,w))) {
printf("%s \n","<< Error at fn. cat_ww()");
return(0x00);
}
return(0x01+(decode_wb_r(di,si)));
}
if(!(decode_surrogate_first(&w,i))) {
printf("%s \n","<< Error at fn. decode_surrogate_first()");
return(0x00);
}
if(!(cat_ww(di,w))) {
printf("%s \n","<< Error at fn. cat_ww()");
return(0x00);
}
if(!(decode_surrogate_second(&w,i))) {
printf("%s \n","<< Error at fn. decode_surrogate_second()");
return(0x00);
}
if(!(cat_ww(di,w))) {
printf("%s \n","<< Error at fn. cat_ww()");
return(0x00);
}
return(0x02+(decode_wb_r(di,si)));
}
