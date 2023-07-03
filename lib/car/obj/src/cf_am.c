# define CAR_H
# include "./../../../config.h"

signed(__cdecl cf_am(signed char(*argp))) {
auto signed char *(am[]) = {
"AM",
"A.M.",
"a.m.",
"am",
0x00,
};
return(cf_ord_b(am,argp));
}
