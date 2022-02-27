/* **** Notes

Display the privileges to a process.
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl priv_rr(void(*argp))) {

auto signed char **v;
auto signed char *b;
auto signed r;
auto signed short flag;

if(!argp) return(0x00);

v = map_ps_token(argp);
if(!v) return(0x00);

r = priv_rrr(v);
if(!(unmap_ps_token(v))) return(0x00);

v = (0x00);

return(r);
}
