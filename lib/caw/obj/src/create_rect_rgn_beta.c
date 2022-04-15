/* **** Notes

Wrap.

Remarks:
Specify coordinate x/y of the upper-left/lower-right corner of the region in logical units.
*/


# include "./incl/config.h"

void *(__cdecl create_rect_rgn_beta(signed(xul),signed(yul),signed(xlr),signed(ylr))) {
return(CreateRectRgn(xul,yul,xlr,ylr));
}
