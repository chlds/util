# define CAR_H
# include "./../../../config.h"

signed(__cdecl cntt_r(signed char(**sym),signed char(*argp))) {
auto signed r;
r = cuet(sym,argp);
if(!r) return(r);
return(0x01+(cntt_r(sym,argp+(r))));
}
