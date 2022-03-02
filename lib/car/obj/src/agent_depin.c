/* **** Notes

Output clipboard text.
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl agent_depin(signed(argc),signed char(**argv),signed char(**envp))) {

auto signed char **v;
auto signed char *b;
auto signed lim;
auto signed r;
auto signed short flag;

AND(lim,0x00);
OR(lim,0x02);
if(!(argc<(lim))) return(depin_help());

b = (0x00);
r = depin_b(&b);
// if(!r) printf("%s \n","<< Error at fn. depin_b()");

r = cli_outs_b(ALIGN_TAB,b);
embed(0x00,b);
rl(b);
b = (0x00);
if(!r) {
AND(r,0x00);
OR(r,0x01);
if(DBG) printf("%s \n","No text..");
}

return(r);
}
