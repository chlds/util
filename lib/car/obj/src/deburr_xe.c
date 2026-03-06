# define CAR_H
# include "./../../../config.h"

signed(__cdecl deburr_xe(void(*args),signed(argp))) {
auto signed r;
r = deburr(args,argp);
rl(args);
args = (0x00);
return(r);
}
