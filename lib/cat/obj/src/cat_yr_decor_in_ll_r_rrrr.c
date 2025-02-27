# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cat_yr_decor_in_ll_r_rrrr(signed char(*args),signed char(*argp))) {
auto signed char *b;
auto signed r;
auto signed char *(c[]) = {
"0","1","2","3","4","5","6","7","8","9",0x00,
};
auto signed char *(a[]) = {
"",
CAT_ROM_NUM_M,
CAT_ROM_NUM_MM,
CAT_ROM_NUM_MMM,
CAT_ROM_NUM_MV,
CAT_ROM_NUM_VA,
CAT_ROM_NUM_VM,
CAT_ROM_NUM_VMM,
CAT_ROM_NUM_VMMM,
CAT_ROM_NUM_MX,
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
args = cat_xe(cath(*(r+(a)),(void*)(0x00)),args,(void*)(0x00));
embed(0x00,b);
return(cat_yr_decor_in_ll_r_rr(args,argp));
}
