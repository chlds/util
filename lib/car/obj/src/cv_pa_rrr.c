/* **** Notes

Convert
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cv_pa_rrr(signed(n),pg_t(*di),signed char(*si))) {
auto signed char *b;
auto pg_t *p;
auto signed r;
if(n<(0x01)) return(0x00);
if(!di) return(0x00);
if(!si) return(0x00);
r = (n);
r++;
r = (r*(sizeof(*b)));
b = (signed char(*)) alloc(r);
if(!b) return(0x00);
r = ncpy(n,b,si);
if(!r) {
rl(b);
b = (0x00);
}
*(CLI_B+(R(b,*di))) = (b);
return(r);
}
