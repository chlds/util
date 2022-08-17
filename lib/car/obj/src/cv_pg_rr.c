/* **** Notes

Convert
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cv_pg_rr(signed(arg),signed char(*sym),pg_t(*di),pg_t(*si))) {
auto signed char *b;
auto pg_t *p;
auto signed r;
if(!di) return(0x00);
if(!si) return(0x00);
r = cue_pg(sym,si);
if(!r) return(0x00);
if(!(bind_pg(di))) return(0x00);
p = (*(CLIH_INDEX+(R(p,*di))));
if(!p) return(0x00);
r = cv_pg_rrr(r,arg,p,si);
si = spool_pg(r,si);
r = (0x01);
return(r+(cv_pg_rr(arg,sym,di,si)));
}
