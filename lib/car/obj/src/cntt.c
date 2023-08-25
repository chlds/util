# define CAR_H
# include "./../../../config.h"

signed(__cdecl cntt(signed char(**sym),signed char(*argp))) {
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
return(cntt_r(sym,argp));
}
