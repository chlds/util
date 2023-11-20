# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl cvte_one_mo_ago_r(signed(args),time_t(arg))) {
auto signed mo;
if(args<(0x00)) return(0x00);
if(arg<(0x00)) return(0x00);
arg = cvte_one_wk_ago(arg);
if(!arg) return(arg);
mo = current_mo_b(DBG,&arg);
if(!(0x01+(mo))) return(0x00);
if(!(EQ(args,mo))) return(arg);
return(cvte_one_mo_ago_r(args,arg));
}
