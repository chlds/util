/* **** Notes

Recursively unmap all the buffers allocated by fn. cv_v.

Remarks:
Refer at fn. rl_v.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl rl_v_r(signed char(**argp))) {

if(!argp) return(0x00);
if(!(*argp)) return(0x00);

embed(0x00,*argp);
rl(*argp);
*argp = (0x00);
argp++;

return(0x01+(rl_v_r(argp)));
}
