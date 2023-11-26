# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl cvte_downrange_accuracy(time_t(argt),signed(args),signed(arg))) {
auto signed r;
auto time_t te;
auto time_t day = (60*(60*(24)));
auto time_t days = (0x07);
auto time_t(__cdecl*f)(time_t(args),signed(arg));
auto time_t(__cdecl**ff)(time_t(args),signed(arg));
auto time_t(__cdecl*(fn[]))(time_t(args),signed(arg)) = {
cvte_downrange_accuracy_rr, // backward
cvte_downrange_accuracy_r,
0x00,
};
if(argt<(0x00)) return(0x00);
if(args<(0x00)) return(argt);
te = (argt);
if(arg) te = cvte_one_wk_ago(te);
// if(!te) return(te);
args = arrwk(args);
r = downrange_accuracy(args,te);
if(!r) return(argt);
ff = (fn);
if(!arg) ff++;
f = (*ff);
if(!f) return(argt);
return(f(te,r));
}
