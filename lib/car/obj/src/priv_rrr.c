/* **** Notes

Display the privileges to a process.
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl priv_rrr(void(*argp))) {

auto signed char *b;
auto void *v;
auto signed r;
auto signed short flag;

if(!argp) return(0x00);

v = (0x00);
r = currently_granting_token_privileges(&v,argp);
if(!r) return(0x00);

r = priv_rrrr(v);
if(!(rl(v))) return(0x00);

return(r);
}
