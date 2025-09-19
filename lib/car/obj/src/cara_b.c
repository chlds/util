# define CAR_H
# include "./../../../config.h"

signed(__cdecl cara_b(signed char *argp)) {
auto signed mask = (0xFF);
if(!argp) return(0x00);
return(mask&(*argp));
}
