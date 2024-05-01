# define CAR_H
# include "./../../../config.h"

signed(__cdecl coph_r(signed char **argp)) {
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
argp++;
return(0x01+(coph_r(argp)));
}
