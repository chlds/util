/*

Retrieve a specified type of information about an access token.

Remarks:
Call fn. rl later.
Refer at fn. cv_luid_priv, cv_priv_luid, map_ps, map_ps_token or..
*/


# define CAR
# include <stdio.h>
# include <windows.h>
# include "../../../incl/config.h"

signed(__cdecl currently_granting_token_privileges_r(signed(arg),void(*di),void(*si/* token */))) {

auto signed char *b;
auto TOKEN_PRIVILEGES *priv;
auto signed size;
auto signed r;
auto signed short flag;

if(arg<(0x01)) return(0x00);
if(!di) return(0x00);
if(!si) return(0x00);

AND(size,0x00);
AND(size,arg);
priv = (TOKEN_PRIVILEGES(*)) (di);
r = GetTokenInformation(si,TokenPrivileges,priv,arg,&size);
if(!r) {
r = currently_occurring_error();
if(!(EQ(ERROR_SUCCESS,r))) {
printf("%s %d %s %Xh \n","<< Error at fn. GetTokenInformation() with no.",r,"or",r);
return(0x00);
}}

return(r);
}
