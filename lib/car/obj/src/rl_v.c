/* **** Notes

Unmap all the buffers allocated by fn. cv_v, cv_wo, cv_ww or..

Remarks:
Refer at fn. cv_pages, cli_outv or cli_output.
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl rl_v(signed char(***argp))) {
auto signed r;
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
r = rl_v_r(*argp);
// if(!r) return(0x00);
rl(*argp);
*argp = (0x00);
// r++;
return(r);
}
