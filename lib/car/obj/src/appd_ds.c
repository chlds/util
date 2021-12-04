/* **** Notes

Append.

Remarks:
write di,si
; write contents into a storage
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl appd_ds(signed char(**argp))) {

auto signed char **v;
auto signed char *b;
auto signed i,r;
auto signed short flag;

if(!argp) return(0x00);
if(!(*argp)) return(0x00);

r = wr_ds_b(argp);
if(!r) {
printf("%s \n","<< Error at fn. wr_ds_b()");
return(0x00);
}

v = (0x02+(argp));
b = (*argp);

return(r+(appd_ds_r(b,v)));
}
