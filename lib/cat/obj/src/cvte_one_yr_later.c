# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl cvte_one_yr_later(time_t(arg))) {
auto signed mo;
if(arg<(0x00)) return(0x00);
AND(mo,0x00);
OR(mo,0x0C);
return(cvte_one_yr_later_r(mo,arg));
}
