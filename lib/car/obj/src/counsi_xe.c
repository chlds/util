# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl counsi_xe(signed short(**args),signed(argp))) {
if(!derefs_xe(args)) return(argp);
return(counsi_xe(++args,++argp));
}
