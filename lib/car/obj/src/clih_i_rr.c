# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl clih_i_rr(signed char(*argp))) {
auto signed char *b;
auto signed r;
b = (argp);
r = ct_a(b);
if(!r) {
embed(0x00,b);
rl(b);
b = (0x00);
return(b);
}
--r;
return(clih_i_rrr(r,b));
}
