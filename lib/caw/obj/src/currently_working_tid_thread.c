/*

Retrieve the thread identifier of the specified thread.

Remarks:
Until a thread terminates, its thread identifier uniquely identifies it on the system.
*/


# define CAW_H
# define STDIO_H
# define WIN32_H
# include "./../../../config.h"

signed(__cdecl currently_working_tid_thread(void(*argp))) {

auto signed r;

if(!argp) return(0x00);

r = GetThreadId(argp);
if(!r) {
r = currently_occurring_error();
if(!(EQ(ERROR_SUCCESS,r))) printf("%s %d %s %Xh \n","<< Error at fn. GetThreadId() with no.",r,"or",r);
return(0x00);
}

return(r);
}
