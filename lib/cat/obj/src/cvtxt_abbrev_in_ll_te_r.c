# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cvtxt_abbrev_in_ll_te_r(time_t *argp)) {
auto signed r;
auto debug = (DBG);
auto signed compatible = (0x01);
if(!argp) return(0x00);
r = current_mo_b(debug,argp);
if(!(0x01+(r))) return(0x00);
r = (compatible+(r));
return(cvtxt_abbrev_in_ll_te_rr(r,argp));
}
