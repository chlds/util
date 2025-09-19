# define CAR_H
# include "./../../../config.h"

signed(__cdecl cym(signed char(*args),signed char(*argp))) {
if(!(cyb(args,argp))) return(0x00);
return(0x01+(cym(++args,++argp)));
}
