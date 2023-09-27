# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cvtxtofmonths_abbrev_in_ll_te(signed char(*di),time_t(*argp))) {
auto signed char *b;
auto signed r;
auto signed compatible = (0x00);
// auto signed debug = (DBG);
auto signed char sp[] = (" ");
if(!argp) return(di);
if(!di) return(cvtxtofmonths_abbrev_in_ll_te_r(argp));
r = (compatible+(current_mo_b(debug,argp)));
if(!(0x01+(r))) return(di);
b = cvtxt_mon_in_ll(r,0x01);
if(!b) return(di);
b = cat_xe(di,catt(sp,(void*)0x00),b,(void*)0x00);
return(b);
}
