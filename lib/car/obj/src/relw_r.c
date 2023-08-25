# define CAR_H
# include "./../../../config.h"

signed(__cdecl relw_r(signed char(**argp))) {
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
embed(0x00,*argp);
rl(*argp);
*argp = (0x00);
argp++;
return(0x01+(relw_r(argp)));
}
