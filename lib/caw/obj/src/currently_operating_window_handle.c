/* Synopsis

Retrieve the handle to the top-level window of its own process
*/


# define CAW_H
# define CAR_H
# define WIN32_H
# include "./../../../config.h"

void *(__cdecl currently_operating_window_handle(void)) {
auto void *v;
v = (0x00);
if(!EnumWindows(currently_operating_window_handle_r,(LPARAM)(&v))) return(0x00);
return(v);
}
