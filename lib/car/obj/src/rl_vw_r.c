/* **** Notes

Recursively unmap all the buffers e.g., allocated by fn. cv_wb_v.

Remarks:
Refer at fn. rl_v.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl rl_vw_r(signed short(**argp))) {

if(!argp) return(0x00);
if(!(*argp)) return(0x00);

embed_w(0x00,*argp);
rl(*argp);
*argp = (0x00);
argp++;

return(0x01+(rl_vw_r(argp)));
}
