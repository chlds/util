/* **** Notes

Re-allocate.

Remarks:
Refer at fn. init_rule.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl remap_rule(signed(arg),rule_t(*argp))) {

auto signed char *b;
auto signed r;

if(arg<(0x01)) return(0x00);
if(!argp) return(0x00);

r = unmap_rule(argp);
if(!r) return(0x00);

return(map_rule(arg,argp));
}
