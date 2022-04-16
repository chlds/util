/* **** Notes

Wrap.

Remarks:
Specify coordinate x/y of the upper-left/lower-right corner of the region in logical units.
*/


# define CAW_H
# define STDIO_H
# define WIN32_H
# include "./../../../config.h"

void *(__cdecl create_rect_rgn_beta(signed(xul),signed(yul),signed(xlr),signed(ylr))) {
return(CreateRectRgn(xul,yul,xlr,ylr));
}
