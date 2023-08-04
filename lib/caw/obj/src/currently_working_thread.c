/*

Retrieve a pseudo handle for the calling thread

Remarks:
The pseudo handle need not be closed when it is no longer needed
*/


# define CAW_H
# define WIN32_H
# include "./../../../config.h"

void *(__cdecl currently_working_thread(void)) {
return(GetCurrentThread());
}
