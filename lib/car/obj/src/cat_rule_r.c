/* **** Notes

Concatenate.

Remarks:
Based on UTF-8
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl cat_rule_r(rule_t(*di),signed char(**si))) {

auto signed char *b;
auto signed i,r;

if(!di) return(0x00);
if(!si) return(0x00);

b = (*(CLI_BASE+(R(b,*di))));
i = ct(b);
b = (0x00);
if(i) {
if(!(cat_b(&b,*(CLI_BASE+(R(b,*di))),(signed char(*))0x00))) return(0x00);
}

r = cat_rule_rr(&b,si);
if(!r) return(0x00);
if(!(replace_rule(di,b))) {
embed(0x00,b);
if(b) rl(b);
b = (0x00);
return(0x00);
}

*(CLI_INDEX+(R(b,*di))) = (i+(b));
*(CLI_LEAD+(R(b,*di))) = (b+(ct(b)));
b = (0x00);
if(i) r++;

AND(i,0x00);

return(r);
}
