/* **** Notes

Count arguments.

Remarks:
Refer at fn. rm_brs.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl ct_argt(signed char(*argp))) {

if(!argp) return(0x00);
if(!(*argp)) return(0x00);

return(ct_argt_r(argp+(cue2(argp))));
}
