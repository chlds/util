# define CAR_H
# include "./../../../config.h"

signed(__cdecl storing(signed(fd),void(*argp))) {
auto signed char **w;
if(!argp) return(0x00);
w = (signed char **)(argp);
return(storing_r(fd,w));
}
