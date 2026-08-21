# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl couns_xe(signed short(*args),signed(argp))) {
if(!derefs(args)) return(argp);
return(couns_xe(++args,++argp));
}
