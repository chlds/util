/*

Retrieve a pseudo handle for the current process.

Remarks:
The pseudo handle need not be closed when it is no longer needed.
*/


# define CAW_H
# define STDIO_H
# define WIN32_H
# include "./../../../config.h"

void *(__cdecl currently_working_process(void)) {

auto signed r;

return(GetCurrentProcess());
}
