/* **** Notes

Append.

Remarks:
write di,si
; write contents into a storage
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl appdw_ds(signed short(**argp))) {

auto signed short **v;
auto signed short *w;
auto signed i,r;
auto signed short flag;

if(!argp) return(0x00);
if(!(*argp)) return(0x00);

r = wr_ds_w(argp);
if(!r) {
printf("%s \n","<< Error at fn. wr_ds_w()");
return(0x00);
}

v = (0x02+(argp));
w = (*argp);

return(0x01+(appdw_ds_r(w,v)));
}
