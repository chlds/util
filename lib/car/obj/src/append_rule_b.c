/* **** Notes

Append.
//*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl append_rule_b(rule_t(*di),signed char(*si))) {

auto signed char *b;
auto signed i,r;
auto signed short flag;

if(!di) return(0x00);
// if(!si) return(0x00);

b = (*(CLI_BASE+(R(b,*di))));
r = compare(*(CLI_INDEX+(R(b,*di))),b);
if(!(concatenate(0x00,&b,si))) return(0x00);

i = (CLI_OBJS);
while(i) *(--i+(R(b,*di))) = (b);
b = (r+(b));
*(CLI_INDEX+(R(b,*di))) = (b);
b = (*(CLI_BASE+(R(b,*di))));
b = (b+(ct(b)));
*(CLI_LEAD+(R(b,*di))) = (b);
b = (0x00);

return(0x01);
}
