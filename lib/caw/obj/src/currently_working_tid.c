/*

Retrieve the thread identifier of the calling thread.

Remarks:
Until the thread terminates, the thread identifier uniquely identifies the thread throughout the system.
*/


# define CAW_H
# define STDIO_H
# define WIN32_H
# include "./../../../config.h"

signed(__cdecl currently_working_tid(void)) {

auto signed r;

return(GetCurrentThreadId());
}
