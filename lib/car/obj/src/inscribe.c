# define CAR_H
# include "./../../../config.h"

signed *(__cdecl inscribe(signed char(**args),signed(*argp))) {
if(!deref_xe(args)) return(argp);
argp = accrete(argp,counc(deref_xe(args++)));
return(inscribe(args,argp));
}
