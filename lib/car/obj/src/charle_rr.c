# define CAR_H
# include "./../../../config.h"

signed(__cdecl charle_rr(signed char(*args),signed(argp))) {
if(!(0x00<(--argp))) return(0x00);
if(!followingbyte(++args)) return(0x00);
return(0x01+(charle_rr(args,argp)));
}
