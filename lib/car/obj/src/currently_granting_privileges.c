/*

Retrieve a specified type of information about an access token.

Remarks:
Call fn. rl_v later.
Refer at fn. cv_luid_priv, cv_priv_luid, map_ps, map_ps_token or..
*/


# define CAR
# include <stdio.h>
# include <windows.h>
# include "../../../incl/config.h"

signed(__cdecl currently_granting_privileges(signed char(***di),void(*si/* structure token privileges */))) {

auto signed char **v;
auto signed char *b;
auto TOKEN_PRIVILEGES *priv;
auto signed r;
auto signed short flag;

if(!di) return(0x00);
if(*di) return(0x00);
if(!si) return(0x00);

priv = (TOKEN_PRIVILEGES(*)) (si);
r = (R(PrivilegeCount,*priv));
if(!r) return(0x00);

r++;
r = (r*(sizeof(*v)));
v = (signed char(**)) alloc(r);
if(!v) return(0x00);

r = (r/(sizeof(*v)));
--r;
*v = (0x00);
r = currently_granting_privileges_r(r,v,priv);
if(!(EQ(r,R(PrivilegeCount,*priv)))) {
AND(r,0x00);
rl_v(&v);
v = (0x00);
}

*di = (v);
v = (0x00);

return(r);
}
