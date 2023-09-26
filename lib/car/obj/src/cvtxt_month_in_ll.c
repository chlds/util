# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl cvtxt_month_in_ll(signed(mo),signed(di))) {
auto signed r;
auto signed months = (12);
auto signed char *(__cdecl*f)(signed arg);
// auto signed char *(__cdecl**ff)(signed arg);
auto signed char *(__cdecl*(fn[]))(signed arg) = {
cvtxt_january_in_ll,
cvtxt_february_in_ll,
cvtxt_march_in_ll,
cvtxt_april_in_ll,
cvtxt_may_in_ll,
cvtxt_june_in_ll,
cvtxt_july_in_ll,
cvtxt_august_in_ll,
cvtxt_september_in_ll,
cvtxt_october_in_ll,
cvtxt_november_in_ll,
cvtxt_december_in_ll,
0x00,
};
r = (mo);
r = (r%(months));
f = (*(r+(fn)));
if(!f) return(0x00);
return(f(di));
}
