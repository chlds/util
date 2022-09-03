/* **** Notes

Convert
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cv_pa_rr(signed(arg),signed char(*sym),pg_t(*di),signed char(*si))) {
auto signed char *b;
auto pg_t *p;
auto signed r;
if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) return(0x00);
r = ct_a(si);
if(!(EQ(0x01,arg))) r = cue(sym,si);
if(!r) return(0x00);
if(!(bind_pg(di))) return(0x00);
p = (*(CLIH_INDEX+(R(p,*di))));
r = cv_pa_rrr(r,p,si);
si = (r+(si));
if(!r) {
r = unbind_pg(di);
if(!r) printf("%s \n","<< Error at fn. unbind_pg()");
return(0x00);
}
r = (0x01);
return(r+(cv_pa_rr(arg,sym,di,si)));
}
