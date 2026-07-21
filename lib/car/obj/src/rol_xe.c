# define CAR_H
# include "./../../../config.h"

signed(__cdecl rol_xe(signed(args),signed(argp))) {
if(!(0x00<(args))) return(argp);
return(rol_xe(--args,rol(argp)));
}
