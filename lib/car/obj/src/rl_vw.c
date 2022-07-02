/* **** Notes

Unmap all the buffers e.g., allocated by fn. cv_wb_v.

Remarks:
Refer at fn. rl_v.
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl rl_vw(signed short(***argp))) {
auto signed r;
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
r = rl_vw_r(*argp);
if(!r) return(0x00);
rl(*argp);
*argp = (0x00);
// r++;
return(r);
}
