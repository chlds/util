# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl cvte_mo_xe(time_t(args),signed(arg))) {
auto time_t te;
auto time_t(__cdecl*f)(time_t(args),signed(arg));
auto time_t(__cdecl**ff)(time_t(args),signed(arg));
auto time_t(__cdecl*(fn[]))(time_t(args),signed(arg)) = {
cvte_mo_later,
cvte_mo_ago,
0x00,
};
if(args<(0x00)) return(0x00);
if(!arg) return(args);
ff = (fn);
if(arg<(0x00)) ff++;
f = (*ff);
if(!f) return(args);
te = cvte_mo_xe_r(args,arg,f);
return(te);
}
