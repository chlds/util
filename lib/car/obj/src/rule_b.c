/* **** Notes

Concatenate with a rule.

Remarks:
Refer at fn. append_rule_b, store_rule_b, backup_rule_b and restore_rule_b.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl rule_b(signed(arg),rule_t(*di),signed char(*si))) {

auto signed char *b;
auto signed i,r;
auto signed short flag;

if(arg<(0x00)) return(0x00);
if(0x02<(arg)) return(0x00);
if(!di) return(0x00);
// if(!si) return(0x00);

AND(r,0x00);
b = (*(CLI_BASE+(R(b,*di))));
// r = compare(*(CLI_INDEX+(R(b,*di))),b);
if(arg) r = (ct(b));
if(EQ(0x02,arg)) r = (r+(ct(si)));
if(!(concatenate(0x00,&b,si))) return(0x00);

i = (OBJS);
while(i) *(--i+(R(b,*di))) = (b);

b = (r+(b));
*(CLI_INDEX+(R(b,*di))) = (b);

b = (*(CLI_BASE+(R(b,*di))));
b = (b+(ct(b)));
*(CLI_LEAD+(R(b,*di))) = (b);
b = (0x00);

return(0x01);
}
