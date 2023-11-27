# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl cvte_downrange_accuracy_xe_r(time_t(argq),signed(argt),signed(args),signed(arg))) {
if(!(0x00<(arg))) return(argq);
argq = cvte_downrange_accuracy(argq,argt,args);
if(!argq) return(argq);
--arg;
return(cvte_downrange_accuracy_xe_r(argq,argt,args,arg));
}
