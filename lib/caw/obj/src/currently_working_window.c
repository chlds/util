/*

Retrieve a handle to the foreground window with which the user is currently working.

Remarks:
Refer at fn. clipboard_map and clipboard_unmap.
*/


# define CAW_H
# define WIN32_H
# include "./../../../config.h"

void *(__cdecl currently_working_window(void)) {
// return(GetConsoleWindow());
return(GetForegroundWindow());
}
