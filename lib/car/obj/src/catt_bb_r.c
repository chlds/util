# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl catt_bb_r(signed arg)) {
auto signed char *b;
auto signed r;
auto signed mask = (0xFF);
AND(r,0x00);
OR(r,0x02);
r = (r*(sizeof(*b)));
b = (signed char *)(alloc(r));
if(!b) return(b);
r = (arg);
r = (mask&(r));
*b = (signed char)(r);
return(catt_bb_rr(b));
}
