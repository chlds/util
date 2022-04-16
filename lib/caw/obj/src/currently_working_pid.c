/*

Retrieve the process identifier of the calling process.

Remarks:
Until the process terminates, the process identifier uniquely identifies the process through the system.
*/


# define CAW_H
# define STDIO_H
# define WIN32_H
# include "./../../../config.h"

signed(__cdecl currently_working_pid(void)) {

auto signed r;

return(GetCurrentProcessId());
}
