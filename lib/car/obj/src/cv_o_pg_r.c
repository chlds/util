/* **** Notes

Convert
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cv_o_pg_r(signed(arg),pg_t(*di),pg_t(*si))) {
auto signed char *b;
auto pg_t *p;
auto signed r;
if(!di) return(0x00);
if(!si) return(0x00);
if(!(init_pg(0x00,di))) return(0x00);
b = (*(CLI_B+(R(b,*si))));
return(cv_o_pg_rr(arg,di,b));
}
