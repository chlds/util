/* **** Notes

Replace.

Remarks:
Refer at fn. init_rule.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl replace_rule(rule_t(*di),signed char(*si))) {

auto signed char *b;
auto signed r;

if(!di) return(0x00);
if(!si) return(0x00);

r = unmap_rule(di);
if(!r) return(0x00);

r = (CLI_OBJS);
while(r) *(--r+(R(b,*di))) = (si);

return(0x01);
}
