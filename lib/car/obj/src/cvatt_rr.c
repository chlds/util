# define CAR_H
# include "./../../../config.h"

signed(__cdecl cvatt_rr(signed char(*argp),signed(__cdecl*f)(signed char(**argv)))) {
auto signed char *(sym[]) = {
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
return(cvatt_rrr(sym,argp,f));
}
