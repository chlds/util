/*

Count

Remarks:
Based on UTF-8
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl ct_pg(signed short(align),signed char(*sym),pg_t(*argp))) {
auto signed char *b;
auto signed r;
// if(!sym) return(0x00);
if(!argp) return(0x00);
r = cue_pg(sym,argp);
if(EQ(0x01,r)) {
b = (*(CLIH_BASE+(R(b,*argp))));
if(!b) return(0x00);
if(!(*b)) return(0x00);
if(EQ(HT,*b)) r = cli_reckon(align);
}
return(r);
}
