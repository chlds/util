/* **** Notes

Minimise the current window.

Remarks:
Return (~0x00) on failure.
*/


# define CAW_H
# define STDIO_H
# define WIN32_H
# include "./../../../config.h"

signed(__cdecl min_window(void)) {

auto void *v;

v = currently_working_window();
if(!v) return(~0x00);

return(show_window_beta(v,SW_MINIMIZE));
}
