# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl cvte_one_yr_ago_r(time_t(args),signed(arg))) {
if(args<(0x00)) return(0x00);
if(!(0x00<(arg))) return(args);
args = cvte_one_mo_ago(args);
--arg;
return(cvte_one_yr_ago_r(args,arg));
}
