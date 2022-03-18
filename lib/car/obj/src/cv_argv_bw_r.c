/* **** Notes

Convert into a table pointer of pointers secured for bytes in UTF-8.

Remarks:
Call fn. rl_argv to release secured buffers at **di and at their contents.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl cv_argv_bw_r(signed char(**di),signed short(**si))) {

auto signed char *b;
auto signed i,r;

if(!di) return(0x00);
if(!si) return(0x00);

if(!(*si)) {
*di = (0x00);
return(0x00);
}

b = (0x00);
r = cv_bw(&b,*si);
if(!r) return(0x00);

*di = (b);
b = (0x00);

di++;
si++;

return(0x01+(cv_argv_bw_r(di,si)));
}
