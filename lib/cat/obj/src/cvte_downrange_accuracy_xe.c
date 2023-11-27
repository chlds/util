# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl cvte_downrange_accuracy_xe(time_t(argt),signed(args),signed(arg))) {
auto signed r;
auto signed ago = (0x01);
auto signed later = (0x00);
if(!arg) return(argt);
AND(r,later);
if(arg<(0x00)) {
arg = (0x01+(~arg));
OR(r,ago);
}
return(cvte_downrange_accuracy_xe_r(argt,args,r,arg));
}
