# define CAR_H
# include "./../../../config.h"

signed(__cdecl ror_xe(signed(args),signed(argp))) {
if(!(0x00<(args))) return(argp);
return(ror_xe(--args,ror(argp)));
}
