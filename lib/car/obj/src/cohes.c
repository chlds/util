# define CAR_H
# include "./../../../config.h"

signed(__cdecl cohes(signed short(*args),signed(argp))) {
if(!(0x00<(--argp))) return(argp);
if(!followingshort(++args)) return(argp);
return(cohes(args,argp));
}
