/*

Decode bytes into characters based on UTF-16.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl decode_wb(signed short(**di),signed char(*si))) {

auto signed char *b;
auto signed r;
auto signed short w;
auto signed short flag;

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
