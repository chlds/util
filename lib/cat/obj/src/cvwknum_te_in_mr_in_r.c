# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cvwknum_te_in_mr_in_r(time_t(*args),signed(argp))) {
auto signed char *b;
auto time_t te;
auto signed wedd = (0x03);
auto signed char sp[] = (" ");
auto signed char week[] = {
0xE0,0xA4,0x86,0xE0,0xA4,0xA0,0xE0,0xA4,0xB5,0xE0,0xA4,0xA1,
0xE0,0xA4,0xBE,0x00,
};
b = (0x00);
if(!args) return(b);
te = (*args);
if(te<(0x00)) return(b);
if(argp<(0x00)) return(b);
argp = (argp%(wedd));
b = cv_in_devanagari_fig(ct_wk(argp,&te));
if(!b) return(b);
if(!('0'^(*b))) b = cas_xe(b);
return(cat_xe(catt(week,sp,(void*)(0x00)),b,(void*)(0x00)));
}
