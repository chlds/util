/* **** Notes

Wrap.
*/


# define CAW_H
# define STDIO_H
# define WIN32_H
# include "./../../../config.h"

signed(__cdecl show_window_beta(void(*hdl),signed(arg))) {
return(ShowWindow(hdl,arg));
}
