# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cvtxt_abbrev_in_ll_te_rrr(time_t(*argp),signed char *(__cdecl*f)(signed(arg),time_t(*argp)))) {
auto signed r;
auto signed debug = (DBG);
if(!argp) return(0x00);
r = current_di_b(debug,argp);
if(!(0x01+(r))) return(0x00);
return(f(r,argp));
}
