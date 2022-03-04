/* **** Notes

Output clipboard text.
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl agent_depin(signed(argc),signed char(**argv),signed char(**envp))) {

auto signed char **v;
auto signed char *b;
auto signed r;
auto signed short flag;
auto signed char *o = ("o");

v = (argv);
v++;
b = (*v);
if(!b) return(depin_output());

cmpr(&r,b,o);
if(!r) {
v++;
b = (*v);
if(!b) return(depin_help());
else return(depin_store(argv));
}

return(depin_help());
}
