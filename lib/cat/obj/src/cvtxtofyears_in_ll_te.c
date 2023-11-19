# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cvtxtofyears_in_ll_te(time_t *argp)) {
auto signed char *b;
auto signed r;
auto signed compatible = (0x01);
auto signed epoch = (1900);
auto signed debug = (DBG);
if(!argp) return(0x00);
r = (compatible+(current_mo_b(debug,argp)));
if(!r) return(0x00);
if(EQ(12,r)) return(cvtxtofyears_in_ll_te_r(argp));
r = (epoch+(current_yr_b(debug,argp)));
if(r<(epoch)) return(0x00);
b = cv_in_roman_numerals(0x00,r);
return(b);
}
