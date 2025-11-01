# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl ser_r(signed char(**args),signed char(*argp))) {
if(!args) return(argp);
if(!(*args)) return(argp);
if(!argp) return(argp);
argp = catna(*args,argp);
return(ser_r(++args,argp));
}
