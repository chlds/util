/* **** Notes

Convert
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cv_o_pg_rrr(signed(arg),pg_t(*di),signed char(*si))) {
auto signed char *b;
auto pg_t *p;
auto signed r;
if(!di) return(0x00);
if(!si) return(0x00);
r = ct_rows_r(arg,si);
b = (si);
b = (r+(b));
embed(0x00,b);
if(!(bind_pg(di))) return(0x00);
p = (*(CLIH_INDEX+(R(p,*di))));
if(!p) return(0x00);
if(!(cat_b(CLI_B+(R(b,*p)),si,(void*) 0x00))) return(0x00);
return(r);
}
