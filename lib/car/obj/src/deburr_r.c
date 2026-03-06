# define CAR_H
# include "./../../../config.h"

signed(__cdecl deburr_r(signed char(*args),signed(argp))) {
if(!(0x00<(argp))) return(argp);
if(!args) return(argp);
*args = (0x00);
return(deburr_r(++args,--argp));
}
