# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl cvte_one_mo(time_t(args),time_t(__cdecl*f)(time_t(args),signed(arg)))) {
auto signed di;
auto time_t te;
auto time_t day = (60*(60*(24)));
if(args<(0x00)) return(0x00);
if(!f) return(0x00);
te = (args);
di = current_di_b(DBG,&te);
if(!(0x01+(di))) return(0x00);
te = cvte_one_mo_r(te,f);
if(!te) return(te);
te = cvte_di(te);
if(te<(0x00)) return(0x00);
if(--di) te = (te+(di*(day)));
return(te);
}
