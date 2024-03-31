# define CAR_H
# include "./../../../config.h"

signed(__cdecl cym(signed char(*args),signed char(*argp))) {
auto signed r;
if(!args) return(0x00);
if(!argp) return(0x00);
r = (signed)(*args);
*argp = (signed char)(r);
argp++;
args++;
if(!r) return(r);
return(0x01+(cym(args,argp)));
}
