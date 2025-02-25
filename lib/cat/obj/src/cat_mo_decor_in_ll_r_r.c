# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cat_mo_decor_in_ll_r_r(time_t(*argp))) {
auto signed char *b;
auto signed r;
auto signed di;
auto signed mo;
auto signed debug = (DBG);
auto signed months = (12);
auto signed compatible = (0x00);
auto signed char *(__cdecl*f)(signed(argp));
auto signed char *(__cdecl**d)(signed(argp));
auto signed char *(__cdecl*(a[]))(signed(argp)) = {
cat_jan_decor_in_ll,
cat_feb_decor_in_ll,
cat_mar_decor_in_ll,
cat_apr_decor_in_ll,
cat_may_decor_abbrev_in_ll,
cat_jun_decor_in_ll,
cat_jul_decor_in_ll,
cat_aug_decor_in_ll,
cat_sep_decor_in_ll,
cat_oct_decor_in_ll,
cat_nov_decor_in_ll,
cat_dec_decor_in_ll,
0x00,
};
b = (0x00);
if(!argp) return(b);
di = current_di_b(debug,argp);
if(!(0x01+(di))) return(b);
mo = current_mo_b(debug,argp);
if(!(0x01+(mo))) return(b);
mo = (compatible+(mo));
r = cat_mo_in_ll_on_carryover(di,mo);
if(r) mo++;
mo = (mo%(compatible+(months)));
d = (a);
d = (mo+(d));
if(!d) return(b);
f = (*d);
if(!f) return(b);
return(f(0x00));
}
