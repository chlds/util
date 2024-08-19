# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cvyrwknum_te(time_t(*args),signed(argp))) {
auto signed char *b;
auto signed r;
auto time_t te;
auto signed digit = (0x00);
auto signed epoch = (1900);
if(!args) return(0x00);
if(argp<(0x00)) return(0x00);
b = (0x00);
r = ct_wk(argp,args);
if(!r) return(b);
te = cvyr_wknum(*args,r);
b = cv(digit,epoch+(current_yr_b(DBG,&te)));
return(cvyrwknum_te_r(&b,r));
}
