/* **** Notes

Output
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cue_out_pg(signed(arg/* align */),signed char(*sym),pg_t(*argp))) {
auto signed r;
if(!argp) return(0x00);
r = cue_pg(sym,argp);
return(cue_out_pg_r(r,arg,argp));
}
