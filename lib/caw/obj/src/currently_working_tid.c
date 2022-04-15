/*

Retrieve the thread identifier of the calling thread.

Remarks:
Until the thread terminates, the thread identifier uniquely identifies the thread throughout the system.
*/


# include "./incl/config.h"

signed(__cdecl currently_working_tid(void)) {

auto signed r;

return(GetCurrentThreadId());
}
