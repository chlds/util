/* **** Notes

Append.

Remarks:
write di,si
; write contents into a storage
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl appd_ds_r(signed char(*di),signed char(**si))) {

auto signed char **v;
auto signed char *b;
auto signed i,r;
auto signed short flag;
auto signed char *(a[OBJS]);

if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) return(0x00);

v = (a);
r = (OBJS);
while(r) *(--r+(v)) = (0x00);
*v = (di);
b = (*si);
*(0x01+(v)) = (b);
if(!b) return(0x00);

r = appd_ds_b(v);
if(!r) {
printf("%s \n","<< Error at fn. appd_ds_b()");
return(0x00);
}

si++;

return(r+(appd_ds_r(di,si)));
}
