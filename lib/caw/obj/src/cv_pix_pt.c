/*

Convert

Remarks:
Refer at fn. get_dpi_b
*/


# define CAW_H
# define MATH_H
# include "./../../../config.h"

signed(__cdecl cv_pix_pt(signed(arg/* pt i.e., points of typeface */))) {
auto double dpi;
auto signed pix;
auto signed pt = (72);
auto signed y = (0x01);
if(arg<(0x01)) return(0x00);
dpi = get_dpi_desktop_b(y);
pix = (signed) round(dpi);
pix = (arg*(pix));
pix = (pix/(pt));
return(pix);
}
