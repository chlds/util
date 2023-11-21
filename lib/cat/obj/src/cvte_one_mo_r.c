# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl cvte_one_mo_r(time_t(args),time_t(__cdecl*f)(time_t(args),signed(arg)))) {
auto signed mo;
auto time_t te;
if(args<(0x00)) return(0x00);
if(!f) return(0x00);
te = (args);
mo = current_mo_b(DBG,&te);
if(!(0x01+(mo))) return(0x00);
return(f(args,mo));
}
