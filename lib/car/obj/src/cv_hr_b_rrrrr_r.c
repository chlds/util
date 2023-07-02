/* **** Notes

Confirm

Remarks:
Return (0x00) on failure
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cv_hr_b_rrrrr_r(signed char(*argp))) {
auto signed char *b;
auto signed r;
auto signed char *(pm[]) = {
"PM",
"P.M.",
"p.m.",
"pm",
0x00,
};
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
b = (argp);
r = ord_b_part(pm,b);
if(!(r<(ct_v(pm)))) return(0x00);
return(0x01);
}
