# define CAR_H
# include "./../../../config.h"

signed(__cdecl countleadingones_r(signed(args),signed(argp))) {
if(!(0x00<(args))) return(args);
if(!(argp<(0x00))) return(args);
return(countleadingones_r(--args,shl(argp)));
}
