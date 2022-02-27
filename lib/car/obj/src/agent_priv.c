/* **** Notes

Display the privileges to a process.
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl agent_priv(signed(argc),signed char(**argv),signed char(**envp))) {

auto signed char **v;
auto signed char *b;
auto signed lim;
auto signed r;
auto signed short flag;
auto signed char *hyphen = ("-");
auto signed local = (0x01);

if(argc<(0x01)) return(0x00);
if(!argv) return(0x00);
// if(!envp) return(0x00);

AND(lim,0x00);
OR(lim,0x02);
if(argc<(lim)) return(priv_help());

printf("\n");

v = (argv);
v++;
b = (*v);

return(priv_r(b));
}
