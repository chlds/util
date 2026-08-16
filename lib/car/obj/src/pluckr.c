# define CAR_H
# include "./../../../config.h"

signed(__cdecl pluckr(signed(*argp))) {
auto signed r;
if(!derefr(argp)) return(0x00);
r = (*argp);
*argp = (0x00);
return(r);
}
