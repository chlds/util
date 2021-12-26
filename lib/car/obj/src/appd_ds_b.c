/* **** Notes

Append.

Remarks:
write di,si
; write contents into a storage
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl appd_ds_b(signed char(**argp))) {

auto signed char *b;
auto signed i,r;
auto signed short flag;
auto fl_t fl;
auto signed threshold = (0x03);
auto signed char *perm = ("rdonly,binary");

if(!argp) return(0x00);
if(!(*argp)) return(0x00);

r = init_fl(0x00,&fl);
if(!r) {
printf("%s \n","<< Error at fn. init_fl()");
return(0x00);
}

AND(r,0x00);
r = (threshold+(~r));
while(r) {
b = (*argp);
argp++;
*(--r+(R(v,fl))) = (void*) (b);
if(!b) return(0x00);
}

return(xt(perm,b,&fl,appd_ds_b_r));
}
