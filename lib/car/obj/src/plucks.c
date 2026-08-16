# define CAR_H
# include "./../../../config.h"

signed(__cdecl plucks(signed short(*argp))) {
auto signed r;
if(!derefs(argp)) return(0x00);
r = (*argp);
*argp = (0x00);
return(r);
}
