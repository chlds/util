# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cat_yr_decor_in_ll_r_rr(signed char(*args),signed char(*argp))) {
auto signed char *b;
auto signed r;
auto signed char *(c[]) = {
"0","1","2","3","4","5","6","7","8","9",0x00,
};
auto signed char *(a[]) = {
"",
CAT_ROM_NUM_X,
CAT_ROM_NUM_XX,
CAT_ROM_NUM_XXX,
CAT_ROM_NUM_XL,
CAT_ROM_NUM_L,
CAT_ROM_NUM_LX,
CAT_ROM_NUM_LXX,
CAT_ROM_NUM_LXXX,
CAT_ROM_NUM_XC,
0x00,
};
b = (argp);
if(!b) return(args);
r = caract_back(b);
if(!r) return(args);
b = (b+(ct(b)));
b = (b+(0x01+(~r)));
r = ordr(c,b);
if(!(r<(ct_v(c)))) return(args);
args = catha_xe(args,*(r+(a)));
embed(0x00,b);
return(cat_yr_decor_in_ll_r_rrr(args,argp));
}
