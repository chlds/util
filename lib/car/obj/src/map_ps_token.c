/*

Open the access token associated with a process.

Remarks:
Refer at fn. unmap_ps_token.
*/


# define CAR
# include <stdio.h>
# include <windows.h>
# include "../../../incl/config.h"

void *(__cdecl map_ps_token(void(*argp))) {

auto void *v;
auto signed r;
auto signed perm = (TOKEN_ALL_ACCESS);

r = OpenProcessToken(argp,perm,&v);
if(!r) {
r = currently_occurring_error();
if(r) printf("%s %d %s %Xh \n","<< Error at fn. OpenProcessToken() with no.",r,"or",r);
return(0x00);
}

return(v);
}
