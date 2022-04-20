/* **** Notes

Output clipboard text.
*/


# define DUAL_CONFIG_H
# define DEPIN_H
# define CAR
# include "./../../../incl/config.h"
# include "./../../../config.h"

signed(__cdecl agent_depin(signed(argc),signed char(**argv),signed char(**envp))) {

auto signed char **v;
auto signed char *b;
auto signed r;
auto signed short flag;
auto signed char *a = ("a");
auto signed char *o = ("o");

v = (argv);
v++;
b = (*v);
if(!b) return(depin_output());

AND(flag,0x00);
cmpr(&r,b,o);
if(!r) OR(flag,0x02);

cmpr(&r,b,a);
if(!r) OR(flag,0x01);
if(flag) {
v++;
b = (*v);
if(b) return(depin_store(flag,argv));
}

return(depin_help());
}
