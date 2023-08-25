# define CAR_H
# include "./../../../config.h"

signed(__cdecl cuesp(signed char *argp)) {
auto signed r;
auto signed mask = (0xFF);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
r = (signed)(*argp);
r = (mask&(r));
if(!(EQ(SP,r))) return(0x00);
argp++;
return(0x01+(cuesp(argp)));
}
