/* **** Notes

Convert into a table pointer of pointers secured for bytes in UTF-8.

Remarks:
Call fn. rl_argv to release secured buffers at **di and at their contents.
*/


# define CAR
# include "./../../../incl/config.h"
# include <stdlib.h>

signed(__cdecl cv_argv_bw(signed char(***di),signed short(**si))) {

auto signed char **b;
auto signed i,r;

if(!di) return(0x00);
if(!si) return(0x00);

r = ct_p(si);
if(!r) return(0x00);

i = (r);
r++;
r = (r*(sizeof(**di)));
b = (signed char(**)) malloc(r);
if(!b) return(0x00);

*di = (b);
b = (0x00);

r = cv_argv_bw_r(*di,si);
if(i^(r)) return(0x00);

return(r);
}
