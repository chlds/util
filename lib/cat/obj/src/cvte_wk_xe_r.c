# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl cvte_wk_xe_r(time_t(args),signed(arg),time_t(__cdecl*f)(time_t(args),signed(arg)))) {
if(args<(0x00)) return(0x00);
if(!arg) return(args);
if(arg<(0x00)) arg = (0x01+(~arg));
if(!f) return(args);
return(f(args,arg));
}
