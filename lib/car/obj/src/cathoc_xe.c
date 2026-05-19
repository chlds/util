# define CAR_H
# include "./../../../config.h"

signed char **(__cdecl cathoc_xe(signed char(*args),signed char(**argp))) {
auto signed char **b;
b = cathoc(args,argp);
argp = rlci(argp);
return(b);
}
