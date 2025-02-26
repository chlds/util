# define CAR_H
# include "./../../../config.h"

signed(__cdecl ordr_apart_xe(signed char(**args),signed char(*argp))) {
if(!args) return(0x00);
if(!(*args)) return(0x00);
if(!(cmpe_apart_xe(*args,argp))) return(0x00);
return(0x01+(ordr_apart_xe(++args,argp)));
}
