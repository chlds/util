/*

Retrieve a pseudo handle that you can use as a shorthand way to
refer to the access token associated with a process.

Remarks:
The pseudo handle need not be closed when it is no longer needed.
*/


# define CAR
# include "./../../../incl/config.h"
# include "./incl/config.h"

void *(__cdecl currently_working_process_token(void)) {

auto signed r;

return(GetCurrentProcessToken());
}
