/*

Cue

Remarks:
Refer at fn. ct_pg
Based on UTF-8
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cue_pg(signed char(*sym),pg_t(*argp))) {
auto signed short flag;
// if(!sym) return(0x00);
if(!argp) return(0x00);
AND(flag,0x00);
return(cue_pg_r(flag,sym,argp));
}
