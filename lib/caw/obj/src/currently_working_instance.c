/*

Retrieve a handle to the application instance.

Remarks:
Refer at fn. currently_working_window.
*/


# define CAW_H
# define WIN32_H
# include "./../../../config.h"

signed long long(__cdecl currently_working_instance(void(*argp/* hdl */))) {
return(GetWindowLongPtr(argp,GWLP_HINSTANCE));
}
