/*

Retrieve the calling thread's last-error code value.

Remarks:
Functions executed by the calling thread
set this value by calling the SetLastError function.
*/


# define CAW_H
# define STDIO_H
# define WIN32_H
# include "./../../../config.h"

signed(__cdecl currently_occurring_error(void)) {
return(GetLastError());
}
