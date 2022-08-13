/* **** Notes

Output
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl out_pg(signed(arg/* align */),signed char(*sym),pg_t(*argp))) {
auto signed r;
// if(!sym) return(0x00);
if(!argp) return(0x00);
r = cue_pg(sym,argp);
if(!r) return(0x00);
return(out_pg_r(r,arg,argp));
}
