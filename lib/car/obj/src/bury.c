# define CAR_H
# include "./../../../config.h"

signed(__cdecl bury(signed char(*argp))) {
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
*argp = (0x00);
return(0x01+(bury(++argp)));
}
