# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl cvte_one_yr_later_r(signed(args),time_t(arg))) {
if(!(0x00<(args))) return(arg);
if(arg<(0x00)) return(0x00);
arg = cvte_one_mo_later(arg);
--args;
return(cvte_one_yr_later_r(args,arg));
}
