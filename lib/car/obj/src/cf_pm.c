# define CAR_H
# include "./../../../config.h"

signed(__cdecl cf_pm(signed char(*argp))) {
auto signed char *(pm[]) = {
"PM",
"P.M.",
"p.m.",
"pm",
0x00,
};
return(cf_ord_b(pm,argp));
}
