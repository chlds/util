# define CAR_H
# include "./../../../config.h"

signed(__cdecl cntt_r(signed char(**sym),signed char(*argp))) {
auto signed r;
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
r = cuet(sym,argp);
if(!r) return(0x00);
argp = (r+(argp));
return(0x01+(cntt_r(sym,argp)));
}
