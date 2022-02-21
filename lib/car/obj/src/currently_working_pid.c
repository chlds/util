/*

Retrieve the process identifier of the calling process.

Remarks:
Until the process terminates, the process identifier uniquely identifies the process through the system.
*/


# define CAR
# include <stdio.h>
# include <windows.h>
# include "../../../incl/config.h"

signed(__cdecl currently_working_pid(void)) {

auto signed r;

return(GetCurrentProcessId());
}
