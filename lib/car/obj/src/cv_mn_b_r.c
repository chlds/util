# define CAR_H
# include "./../../../config.h"

signed(__cdecl cv_mn_b_r(signed char(*argp))) {
auto signed char *(b[]) = {
":",
".",
"H",
"h",
"AM",
"A.M.",
"a.m.",
"am",
"PM",
"P.M.",
"p.m.",
"pm",
0x00,
};
if(!argp) return(~0x00);
return(cv_mn_b_rr(b,argp));
}
