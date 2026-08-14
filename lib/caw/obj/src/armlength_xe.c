# define CAW_H
# define CAR_H
# include "./../../../config.h"

signed(__cdecl armlength_xe(void(*args),signed char(*argp))) {
auto signed short *w;
auto signed r;
w = (0x00);
cv_wb(&w,argp);
r = armlength_xe_r(args,w);
embed_w_l(0x00,w);
rl(w);
w = (0x00);
return(r);
}
