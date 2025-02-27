# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cat_yr_prep_in_ll_r(time_t(*args),signed char *(__cdecl*f)(signed(arg)))) {
auto signed char *b;
auto signed r;
auto time_t te;
auto signed epoch = (1900);
auto signed idus = (13);
auto signed nonae = (5);
auto signed debug = (DBG);
auto time_t day = (24*(60*(60)));
b = (0x00);
if(!args) return(b);
if(!f) return(b);
te = (*args);
r = current_di_b(debug,args);
if(!(0x01+(r))) return(b);
if(idus<(r)) {
r = (nonae+(idus));
te = (te+(r*(day)));
}
r = (epoch+(current_yr_b(debug,&te)));
if(r<(epoch)) return(b);
return(f(r));
}
