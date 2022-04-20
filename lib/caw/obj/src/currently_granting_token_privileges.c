/*

Retrieve a specified type of information about an access token.

Remarks:
Call fn. rl later.
Refer at fn. cv_luid_priv, cv_priv_luid, map_ps, map_ps_token or..
*/


# define DUAL_CONFIG_H
# define CAW_H
# define STDIO_H
# define WIN32_H
# define CAR
# include "./../../../incl/config.h"
# include "./../../../config.h"

signed(__cdecl currently_granting_token_privileges(void(**di),void(*si/* token */))) {

auto signed char *b;
auto TOKEN_PRIVILEGES *priv;
auto signed size;
auto signed r;
auto signed short flag;

if(!di) return(0x00);
if(*di) return(0x00);
if(!si) return(0x00);

AND(size,0x00);
AND(r,0x00);
priv = (0x00);
r = GetTokenInformation(si,TokenPrivileges,priv,r,&size);
if(!r) {
r = currently_occurring_error();
if(!(EQ(ERROR_SUCCESS,r))) {
if(!(EQ(ERROR_INSUFFICIENT_BUFFER,r))) {
printf("%s %d %s %Xh \n","<< Error at fn. GetTokenInformation() with no.",r,"or",r);
return(0x00);
}}}

r = (size);
priv = (TOKEN_PRIVILEGES(*)) alloc(r);
if(!priv) return(0x00);

r = currently_granting_token_privileges_r(r,priv,si);
if(!r) {
printf("%s \n","<< Error at fn. currently_granting_token_privileges_r()");
rl(priv);
priv = (0x00);
}

*di = (void*) (priv);
priv = (0x00);

return(r);
}
