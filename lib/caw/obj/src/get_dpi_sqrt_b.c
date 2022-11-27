/* **** Notes

DPI
*/


# define CAW_H
# define STDIO_H
# define MATH_H
# define WIN32_H
# include "./../../../config.h"

double(__cdecl get_dpi_sqrt_b(void(*argp/* whdl */))) {
auto void *cdc;
auto signed r;
auto signed mm;
auto double dpi;
auto double pix;
auto double inches;
auto double inch[0x02];
auto double pixel[0x02];
auto double mm_per_inch = (25.4);
auto signed res[] = {
HORZRES,VERTRES,0x00,
};
auto signed *(ress[]) = {
(0x00+(res)),
(0x01+(res)),
0x00,
};
auto signed size[] = {
HORZSIZE,VERTSIZE,0x00,
};
auto signed *(sizes[]) = {
(0x00+(size)),
(0x01+(size)),
0x00,
};
// if(!argp) return(0x00);
cdc = GetDC(argp);
if(!cdc) return(0x00);
dpi = (0x00);
pix = (0x00);
r = ct_v_d(ress);
while(r) {
*(r+(pixel)) = GetDeviceCaps(cdc,**(--r+(ress)));
dpi = (*(r+(pixel)));
dpi = (dpi*(dpi));
pix = (dpi+(pix));
}
dpi = (0x00);
inches = (0x00);
r = ct_v_d(sizes);
while(r) {
mm = GetDeviceCaps(cdc,**(--r+(sizes)));
*(r+(inch)) = (mm/(mm_per_inch));
dpi = (*(r+(inch)));
dpi = (dpi*(dpi));
inches = (dpi+(inches));
}
if(!(ReleaseDC(argp,cdc))) return(0x00);
inches = sqrt(inches);
pix = sqrt(pix);
dpi = (pix/(inches));
return(dpi);
}
