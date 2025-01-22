# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl cvtxt_month_in_ll(signed(argt/* carry over */),signed(mo),signed(di))) {
auto signed r;
auto signed months = (12);
auto signed char *(__cdecl*f)(signed(args),signed(argp));
auto signed char *(__cdecl**d)(signed(args),signed(argp));
auto signed char *(__cdecl*(a[]))(signed(args),signed(argp)) = {
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
d = (a);
r = (mo);
r = (r%(months));
d = (r+(d));
if(!d) return(0x00);
f = (*d);
if(!f) return(0x00);
return(f(argt,di));
}
