/* **** Notes

Jot down.
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl agent_jd_w(signed(argc),signed short(**argv),signed short(**envp))) {

auto signed char **v;
auto signed char *b;
auto signed r;
auto signed short flag;

b = (0x00);
r = encode_bv(&b,argv);
if(!r) {
printf("%s \n","<< Error at fn. encode_bv()");
return(0x00);
}

r = agent_jd_w_r(argc,b,0x00);
if(!r) printf("%s \n","<< Error at fn. agent_jd_w_r()");

embed(0x00,b);
rl(b);
b = (0x00);

return(r);
}
