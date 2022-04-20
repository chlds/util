/*

Open the access token associated with a thread.

Remarks:
Refer at fn. unmap_td_token.
*/


# define CAW_H
# define STDIO_H
# define WIN32_H
# include "./../../../config.h"

void *(__cdecl map_td_token(signed(arg/* open as self */),void(*argp))) {

auto void *v;
auto signed r;
auto signed perm = (TOKEN_ALL_ACCESS);

v = (0x00);
r = OpenThreadToken(argp,perm,arg,&v);
if(!r) {
r = currently_occurring_error();
if(r) {
if(!(EQ(ERROR_NO_TOKEN,r))) printf("%s %d %s %Xh \n","<< Error at fn. OpenThreadToken() with no.",r,"or",r);
}
return(0x00);
}

return(v);
}
