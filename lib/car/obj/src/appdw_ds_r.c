/* **** Notes

Append.

Remarks:
write di,si
; write contents into a storage
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl appdw_ds_r(signed short(*di),signed short(**si))) {

auto signed short **v;
auto signed short *w;
auto signed i,r;
auto signed short flag;
auto signed short *(a[OBJS]);

if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) return(0x00);

v = (a);
r = (OBJS);
while(r) *(--r+(v)) = (0x00);
*v = (di);
w = (*si);
*(0x01+(v)) = (w);
if(!w) return(0x00);

r = appd_ds_w(v);
if(!r) {
printf("%s \n","<< Error at fn. appd_ds_w()");
return(0x00);
}

si++;

return(0x01+(appdw_ds_r(di,si)));
}
