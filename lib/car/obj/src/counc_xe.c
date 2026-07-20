# define CAR_H
# include "./../../../config.h"

signed(__cdecl counc_xe(signed char(*args),signed(argp))) {
if(!deref(args)) return(argp);
return(counc_xe(++args,++argp));
}
