/*

Retrieve a pseudo handle for the calling thread.

Remarks:
The pseudo handle need not be closed when it is no longer needed.
*/


# define CAR
# include <stdio.h>
# include <windows.h>
# include "../../../incl/config.h"

void *(__cdecl currently_working_thread(void)) {

auto signed r;

return(GetCurrentThread());
}
