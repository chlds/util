# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl catt_bb_r(signed arg)) {
auto signed char *b;
auto signed r;
auto signed mask = (0xFF);
r = (0x01*(sizeof(*b)));
r++;
b = (signed char *) alloc(r);
if(!b) return(b);
r = (arg);
r = (mask&(r));
*b = (signed char) (r);
AND(r,0x00);
*(0x01+(b)) = (signed char) (r);
return(b);
}
