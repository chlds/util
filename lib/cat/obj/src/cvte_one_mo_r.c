# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl cvte_one_mo_r(time_t(arg),time_t(__cdecl*f)(signed(args),time_t(arg)))) {
auto signed mo;
if(arg<(0x00)) return(0x00);
if(!f) return(0x00);
mo = current_mo_b(DBG,&arg);
if(!(0x01+(mo))) return(0x00);
return(f(mo,arg));
}
