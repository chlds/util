/* **** Notes

Release

Remarks:
Refer at fn. cv_argv_bw.
*/


# define CAR
# include "./../../../incl/config.h"
# include <stdlib.h>

signed(__cdecl rl_argv(signed char(***argp))) {

auto signed i,r;

if(!argp) return(0x00);
if(!(*argp)) return(0x00);

r = rl_argv_r(*argp);
if(!r) return(0x00);

free(*argp);
*argp = (0x00);

return(r);
}
