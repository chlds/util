/* **** Notes

Map.

Remarks:
Call fn. unmap_b later.
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl map_b(size_t(offset),signed(range),signed char(**di),signed char(*delim),signed char(*si/* path */))) {

auto signed char *b;
auto signed short *w;
auto signed r;

if(offset<(0x00)) return(0x00);
if(range<(0x01)) return(0x00);
if(!di) return(0x00);
if(*di) return(0x00);
if(!si) return(0x00);

w = (0x00);
if(!(cv_wb(&w,si))) {
printf("%s \n","<< Error at fn. cv_wb()");
return(0x00);
}

r = ld_w(offset,range,di,delim,w);
if(!r) printf("%s \n","<< Error at fn. ld_w()");

embed_w(0x00,w);
rl(w);
w = (0x00);

return(r);
}
