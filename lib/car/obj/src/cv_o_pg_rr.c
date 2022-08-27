/* **** Notes

Convert
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cv_o_pg_rr(signed(arg),pg_t(*di),signed char(*si))) {
auto signed char *b;
auto signed r;
if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) return(0x00);
r = ct(si);
if(!r) return(0x00);
r++;
r = (r*(sizeof(*b)));
b = (signed char(*)) alloc(r);
if(!b) return(0x00);
r = cv_o_pg_rrr(arg,di,b);
embed(0x00,b);
rl(b);
b = (0x00);
si = (r+(si));
if(!r) return(0x00);
return(0x01+(cv_o_pg_rr(arg,di,si)));
}
