/* **** Notes

Concatenate.

Remarks:
Based on UTF-8
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl cat_rule_rr(signed char(**di),signed char(**si))) {

auto signed char *b;
auto signed r;

if(!di) return(0x00);
if(!si) return(0x00);

r = cat_b_r(di,si);
if(!r) {
b = (*di);
embed(0x00,b);
if(b) rl(b);
b = (0x00);
*di = (b);
return(0x00);
}

return(r);
}
