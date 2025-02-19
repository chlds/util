# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cat_mo_in_ll_r_rr(time_t(*argp))) {
auto signed char *b;
auto signed r;
auto signed di;
auto signed mo;
auto signed debug = (DBG);
auto signed months = (12);
auto signed compatible = (0x00);
auto signed char *(__cdecl*f)(signed(args),signed(argp));
auto signed char *(__cdecl**d)(signed(args),signed(argp));
auto signed char *(__cdecl*(a[]))(signed(args),signed(argp)) = {
cat_january_in_ll,
cat_february_in_ll,
cat_march_in_ll,
cat_april_in_ll,
cat_may_in_ll,
cat_june_in_ll,
cat_july_in_ll,
cat_august_in_ll,
cat_september_in_ll,
cat_october_in_ll,
cat_november_in_ll,
cat_december_in_ll,
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
return(f(di,r));
}
