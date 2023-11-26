# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl downrange_accuracy(signed(args),time_t(arg))) {
auto signed r;
auto time_t te;
auto signed days = (0x07);
if(args<(0x00)) return(0x00);
if(arg<(0x00)) return(0x00);
args = arrwk(args);
te = (arg);
r = current_wk_b(DBG,&te);
if(!(0x01+(r))) return(0x00);
if(!(EQ(args,r))) return(days+(0x01+(~(ctdn_wk(args,te)))));
return(downrange_accuracy_r(arg));
}
