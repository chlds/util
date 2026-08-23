# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl propag(signed char(*args),signed char(*argp))) {
if(!soot(args,argp)) return(argp);
return(propag(++args,++argp));
}
