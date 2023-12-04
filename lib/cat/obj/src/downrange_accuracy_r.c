# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl downrange_accuracy_r(time_t(arg))) {
auto signed r;
auto time_t te;
auto signed days = (0x07);
if(arg<(0x00)) return(0x00);
te = (arg);
te = cvte_one_wk_later(te);
if(!te) return(0x00);
te = cvte_ad(te);
if(!te) return(0x00);
r = current_di_b(DBG,&te);
if(!(0x01+(r))) return(0x00);
if(!(r<(days))) AND(r,0x00);
r = (days+(0x01+(~r)));
return(r);
}
