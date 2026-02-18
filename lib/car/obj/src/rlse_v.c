# define CAR_H
# include "./../../../config.h"

signed(__cdecl rlse_v(signed char(**argp))) {
auto signed r;
if(!argp) return(0x00);
r = rlse_v_r(argp);
rl(argp);
argp = (0x00);
return(r);
}
