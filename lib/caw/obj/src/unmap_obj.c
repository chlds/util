/*

Close an open object handle.

Remarks:
Refer at fn. unmap_td, unmap_ps or unmap_ps_token.
*/


# define CAW_H
# define STDIO_H
# define WIN32_H
# include "./../../../config.h"

signed(__cdecl unmap_obj(void(*argp))) {

auto signed r;

if(!argp) return(0x00);

r = CloseHandle(argp);
if(!r) {
r = currently_occurring_error();
if(!(EQ(ERROR_SUCCESS,r))) printf("%s %d %s %Xh \n","<< Error at fn. CloseHandle() with no.",r,"or",r);
return(0x00);
}

return(r);
}
