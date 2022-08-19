/* **** Notes

Convert
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cv_pa_r(signed(arg),signed char(*sym),pg_t(*di),signed char(*si))) {
auto signed char *b;
auto pg_t *p;
auto signed r;
if(!di) return(0x00);
if(!si) return(0x00);
if(!(init_pg(0x00,di))) return(0x00);
return(cv_pa_rr(arg,sym,di,si));
}
