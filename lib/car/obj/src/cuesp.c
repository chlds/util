# define CAR_H
# include "./../../../config.h"

signed(__cdecl cuesp(signed char *argp)) {
if(!(EQ(SP,deref(argp)))) return(0x00);
return(0x01+(cuesp(++argp)));
}
