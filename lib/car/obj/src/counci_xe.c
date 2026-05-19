# define CAR_H
# include "./../../../config.h"

signed(__cdecl counci_xe(signed char(**args),signed(argp))) {
if(!deref_xe(args)) return(argp);
return(counci_xe(++args,++argp));
}
