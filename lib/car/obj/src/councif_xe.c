# define CAR_H
# include "./../../../config.h"

signed(__cdecl councif_xe(signed char(*argt),signed char(**args),signed(argp))) {
if(!deref_xe(args)) return(argp);
return(councif_xe(argt,++args,argp+(!cmpe_apart(argt,*args))));
}
