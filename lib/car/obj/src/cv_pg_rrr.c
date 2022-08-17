/* **** Notes

Convert
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cv_pg_rrr(signed(n),signed(arg),pg_t(*di),pg_t(*si))) {
auto signed char *b;
auto pg_t *p;
auto signed r;
if(n<(0x01)) return(0x00);
if(!di) return(0x00);
if(!si) return(0x00);
b = (*(CLI_B+(R(b,*si))));
if(!(cat_b(CLI_B+(R(b,*di)),b,(void*) 0x00))) return(0x00);
si = (*(CLIH_DI+(R(p,*si))));
--n;
return(0x01+(cv_pg_rrr(n,arg,di,si)));
}
