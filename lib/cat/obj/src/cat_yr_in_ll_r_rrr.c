# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cat_yr_in_ll_r_rrr(signed char(*args),signed char(*argp))) {
auto signed char *b;
auto signed r;
auto signed char *(c[]) = {
"0","1","2","3","4","5","6","7","8","9",0x00,
};
auto signed char *(a[]) = {
"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM",0x00,
};
b = (argp);
if(!b) return(args);
r = caract_back(b);
if(!r) return(args);
b = (b+(ct(b)));
b = (b+(0x01+(~r)));
r = ordr(c,b);
if(!(r<(ct_v(c)))) return(args);
args = cat_xe(cath(*(r+(a)),(void*)(0x00)),args,(void*)(0x00));
embed(0x00,b);
return(cat_yr_in_ll_r_rrrr(args,argp));
}
