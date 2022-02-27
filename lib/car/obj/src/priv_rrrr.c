/* **** Notes

Display the privileges to a process.
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl priv_rrrr(void(*argp))) {

auto signed char **v;
auto signed char *b;
auto signed r;
auto signed short flag;

if(!argp) return(0x00);

if(!(currently_granting_n_privileges(argp))) {
printf("%s \n","No privilege");
return(0x01);
}

v = (0x00);
r = currently_granting_privileges(&v,argp);
if(!r) return(0x00);

r = priv_rrrrr(v);
if(!(rl_v(&v))) return(0x00);

return(r);
}
