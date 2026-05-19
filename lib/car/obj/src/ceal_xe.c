# define CAR_H
# include "./../../../config.h"

signed(__cdecl ceal_xe(signed char(*args),signed(argp))) {
if(!deref(args)) return(argp);
*args = (0x00);
return(ceal_xe(++args,++argp));
}
