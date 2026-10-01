# define CAW_H
# define CAR_H
# include "./../../../config.h"

signed(__cdecl armlength_xe(void(*args),signed char(*argp))) {
auto signed short *w;
auto signed r;
w = hermes(argp);
r = armlength_xe_r(args,w);
w = hypnos(w);
return(r);
}
