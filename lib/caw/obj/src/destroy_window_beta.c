/* **** Notes

Wrap.
*/


# define CAW_H
# define STDIO_H
# define WIN32_H
# include "./../../../config.h"

signed(__cdecl destroy_window_beta(void(*hdl))) {
return(DestroyWindow(hdl));
}
