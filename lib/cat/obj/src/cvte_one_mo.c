# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl cvte_one_mo(time_t(arg),time_t(__cdecl*f)(signed(args),time_t(arg)))) {
auto signed di;
auto time_t day = (60*(60*(24)));
if(arg<(0x00)) return(0x00);
if(!f) return(0x00);
di = current_di_b(DBG,&arg);
if(!(0x01+(di))) return(0x00);
arg = cvte_one_mo_r(arg,f);
if(!arg) return(arg);
arg = cvte_di(arg);
if(arg<(0x00)) return(0x00);
if(--di) arg = (arg+(di*(day)));
return(arg);
}
