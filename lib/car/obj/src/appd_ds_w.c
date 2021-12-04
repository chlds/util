/* **** Notes

Append.

Remarks:
write di,si
; write contents into a storage
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl appd_ds_w(signed short(**argp))) {

auto signed short *w;
auto signed i,r;
auto signed short flag;
auto fl_t fl;
auto signed threshold = (0x03);
auto signed char *perm = ("rdonly,binary");

if(!argp) return(0x00);
if(!(*argp)) return(0x00);

r = init_fl(&fl);
if(!r) {
printf("%s \n","<< Error at fn. init_fl()");
return(0x00);
}

AND(r,0x00);
r = (threshold+(~r));
while(r) {
w = (*argp);
argp++;
*(--r+(R(v,fl))) = (void*) (w);
if(!w) return(0x00);
}

return(xt_w(perm,w,&fl,appd_ds_w_r));
}
