/* **** Notes

DPI

Remarks:
0x00 for X
0x01 for Y
More for size
*/


# define CAW_H
# define STDIO_H
# define WIN32_H
# include "./../../../config.h"

double(__cdecl get_dpi_b(signed(arg),void(*argp/* whdl */))) {
auto void *cdc;
auto signed r;
auto signed pix;
auto signed mm;
auto double inches;
auto double dpi;
auto double mm_per_inch = (25.4);
auto signed res[] = {
HORZRES,VERTRES,0x00,
};
auto signed size[] = {
HORZSIZE,VERTSIZE,0x00,
};
if(arg<(0x00)) return(0x00);
// if(!argp) return(0x00);
if(0x01<(arg)) return(get_dpi_sqrt_b(argp));
cdc = GetDC(argp);
if(!cdc) return(0x00);
r = (arg);
pix = GetDeviceCaps(cdc,*(r+(res)));
mm = GetDeviceCaps(cdc,*(r+(size)));
if(!(ReleaseDC(argp,cdc))) return(0x00);
inches = (mm/(mm_per_inch));
dpi = (pix/(inches));
return(dpi);
}
