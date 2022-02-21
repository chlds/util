/*

Retrieve a pseudo handle for the current process.

Remarks:
The pseudo handle need not be closed when it is no longer needed.
*/


# define CAR
# include <stdio.h>
# include <windows.h>
# include "../../../incl/config.h"

void *(__cdecl currently_working_process(void)) {

auto signed r;

return(GetCurrentProcess());
}
