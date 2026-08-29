# define CAR_H
# include "./../../../config.h"

signed(__cdecl cohe(signed char(*args),signed(argp))) {
if(!(0x00<(--argp))) return(argp);
if(!followingbyte(++args)) return(argp);
return(cohe(args,argp));
}
