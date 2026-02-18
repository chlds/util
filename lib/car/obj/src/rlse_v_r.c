# define CAR_H
# include "./../../../config.h"

signed(__cdecl rlse_v_r(signed char(**argp))) {
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
rlse(*argp);
*argp = (0x00);
return(0x01+(rlse_v_r(++argp)));
}
