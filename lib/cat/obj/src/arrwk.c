# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl arrwk(signed arg)) {
auto signed r;
auto signed days = (0x07);
r = (arg);
if(r<(0x00)) r = (0x01+(~r));
r = (r%(days));
return(r);
}
