# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cat_yr_prep_in_ll(time_t(*args),signed char *(__cdecl*f)(signed(arg)))) {
auto signed char *b;
auto signed r;
auto signed compatible = (0x01);
auto signed epoch = (1900);
auto signed debug = (DBG);
b = (0x00);
if(!args) return(b);
if(!f) return(b);
r = current_mo_b(debug,args);
if(!(0x01+(r))) return(b);
r = (compatible+(r));
if(EQ(12,r)) return(cat_yr_prep_in_ll_r(args,f));
r = (epoch+(current_yr_b(debug,args)));
if(r<(epoch)) return(b);
return(f(r));
}
