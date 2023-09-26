# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl cvtxt_mon_in_ll(signed(mo),signed(arg))) {
auto signed r;
auto signed months = (12);
auto signed char *(__cdecl*f)(signed arg);
// auto signed char *(__cdecl**ff)(signed arg);
auto signed char *(__cdecl*(fn[]))(signed arg) = {
cvtxt_jan_in_ll,
cvtxt_feb_in_ll,
cvtxt_mar_in_ll,
cvtxt_apr_in_ll,
cvtxt_may_abbrev_in_ll,
cvtxt_jun_in_ll,
cvtxt_jul_in_ll,
cvtxt_aug_in_ll,
cvtxt_sep_in_ll,
cvtxt_oct_in_ll,
cvtxt_nov_in_ll,
cvtxt_dec_in_ll,
0x00,
};
r = (mo);
r = (r%(months));
f = (*(r+(fn)));
if(!f) return(0x00);
return(f(arg));
}
