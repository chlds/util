/*

Retrieve the process identifier of the specified process.

Remarks:
Until a process terminates, its process identifier uniquely identifies it on the system.
*/


# define CAW_H
# define STDIO_H
# define WIN32_H
# include "./../../../config.h"

signed(__cdecl currently_working_pid_process(void(*argp))) {

auto signed r;

if(!argp) return(0x00);

r = GetProcessId(argp);
if(!r) {
r = currently_occurring_error();
if(!(EQ(ERROR_SUCCESS,r))) printf("%s %d %s %Xh \n","<< Error at fn. GetProcessId() with no.",r,"or",r);
return(0x00);
}

return(r);
}
