/*

Retrieve a specified type of information about an access token

Remarks:
Refer at fn. cv_luid_priv, cv_priv_luid, map_ps, map_ps_token or..
*/


# define CAW_H
# define CAR_H
# define STDIO_H
# define WIN32_H
# include "./../../../config.h"

signed(__cdecl currently_granting_privileges_r(signed(arg),signed char(**di),void(*si/* structure token privileges */))) {
auto signed char *b;
auto TOKEN_PRIVILEGES *priv;
auto signed low;
auto signed high;
auto signed r;
auto LUID luid;
if(arg<(0x01)) return(0x00);
if(!di) return(0x00);
if(*di) return(0x00);
if(!si) return(0x00);
priv = (TOKEN_PRIVILEGES(*)) (si);
luid = (R(Luid,*(--arg+(R(Privileges,*priv)))));
low = (signed) (R(LowPart,luid));
high = (R(HighPart,luid));
b = (0x00);
if(!(cv_priv_luid(&b,low,high))) return(0x00);
r = cat_b(di,b,(void*)0x00);
embed(0x00,b);
rl(b);
b = (0x00);
if(!r) return(0x00);
di++;
*di = (0x00);
return(0x01+(currently_granting_privileges_r(arg,di,si)));
}
