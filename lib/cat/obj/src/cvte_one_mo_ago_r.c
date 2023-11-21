# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl cvte_one_mo_ago_r(time_t(args),signed(arg))) {
auto signed mo;
auto time_t te;
if(args<(0x00)) return(0x00);
if(arg<(0x00)) return(0x00);
te = (args);
te = cvte_one_wk_ago(te);
if(!te) return(te);
mo = current_mo_b(DBG,&te);
if(!(0x01+(mo))) return(0x00);
if(!(EQ(arg,mo))) return(te);
return(cvte_one_mo_ago_r(te,arg));
}
