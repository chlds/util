/* **** Notes

Desktop DPI

Remarks:
0x00 for X
0x01 for Y
More for size
*/


# define CAW_H
# define STDIO_H
# define WIN32_H
# include "./../../../config.h"

double(__cdecl get_dpi_desktop_b(signed(arg))) {
auto void *desktop;
desktop = (void*) GetDesktopWindow();
return(get_dpi_b(arg,desktop));
}
