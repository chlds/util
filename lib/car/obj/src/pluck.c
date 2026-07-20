# define CAR_H
# include "./../../../config.h"

signed(__cdecl pluck(signed char(*argp))) {
auto signed r;
if(!deref(argp)) return(0x00);
r = (*argp);
*argp = (0x00);
return(r);
}
