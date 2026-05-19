# define CAR_H
# include "./../../../config.h"

signed char **(__cdecl alleg(signed char(**args),signed char(**argp))) {
if(!allegro(args,argp)) return(argp);
return(alleg(++args,++argp));
}
