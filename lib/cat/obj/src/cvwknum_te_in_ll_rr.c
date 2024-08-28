# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cvwknum_te_in_ll_rr(time_t(*args),signed(argp))) {
auto signed char *b;
auto time_t te;
auto signed wedd = (0x03);
auto signed char sp[] = (" ");
auto signed char week[] = ("H");
// auto signed char week[] = ("S");
b = (0x00);
if(!args) return(b);
te = (*args);
if(te<(0x00)) return(b);
if(argp<(0x00)) return(b);
argp = (argp%(wedd));
b = cv_in_roman_numerals(0x00,ct_wk(argp,&te));
if(!b) return(b);
if(!('0'^(*b))) b = cas_xe(b);
return(cat_xe(catt(week,sp,(void*)(0x00)),b,(void*)(0x00)));
}
