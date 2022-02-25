/*

Retrieve a handle to the foreground window with which the user is currently working.

Remarks:
Refer at fn. clipboard_map and clipboard_unmap.
*/


# define CAR
# include <stdio.h>
# include <windows.h>
# include "../../../incl/config.h"

void *(__cdecl currently_working_window(void)) {

auto void *v;
auto signed r;
auto signed short flag;

// v = (void(*)) GetConsoleWindow();
v = (void(*)) GetForegroundWindow();
if(!v) {
r = currently_occurring_error();
printf("%s %d %s %Xh \n","<< Error at fn. GetForegroundWindow() with no.",r,"or",r);
}

return(v);
}
