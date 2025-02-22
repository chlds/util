# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cat_wk_in_ll_r_rr(time_t(*argp))) {
auto signed char *b;
auto signed r;
auto signed debug = (DBG);
// auto signed weeks = (7);
auto signed char *(__cdecl*f)(signed(argp));
auto signed char *(__cdecl**d)(signed(argp));
auto signed char *(__cdecl*(a[]))(signed(argp)) = {
cat_sunday_in_ll,
cat_monday_in_ll,
cat_tuesday_in_ll,
cat_wednesday_in_ll,
cat_thursday_in_ll,
cat_friday_in_ll,
cat_saturday_in_ll,
0x00,
};
b = (0x00);
if(!argp) return(b);
r = current_wk_b(debug,argp);
if(!(0x01+(r))) return(b);
d = (a);
d = (r+(d));
if(!d) return(b);
f = (*d);
if(!f) return(b);
return(f(0x00));
}
