/*

Retrieve a pseudo handle that you can use as a shorthand way to
refer to the impersonation token that was assigned to the current thread.

Remarks:
The pseudo handle need not be closed when it is no longer needed.
*/


# include "./incl/config.h"

void *(__cdecl currently_working_thread_token(void)) {

auto signed r;

return(GetCurrentThreadToken());
}
