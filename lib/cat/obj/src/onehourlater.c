# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl onehourlater(time_t(arg))) {
if(arg<(0x00)) return(0x00);
arg = (arg+(sph(1)));
if(arg<(0x00)) return(0x00);
return(arg);
}
