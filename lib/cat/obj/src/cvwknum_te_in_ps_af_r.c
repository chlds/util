# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cvwknum_te_in_ps_af_r(time_t(*args),signed(argp))) {
auto signed char *b;
auto time_t te;
auto signed wedd = (0x03);
auto signed char sp[] = (" ");
auto signed char week[] = {
0xD8,0xA7,0xD9,0x88,0xD9,0x86,0xDB,0x8D,
0x00,
};
b = (0x00);
if(!args) return(b);
te = (*args);
if(te<(0x00)) return(b);
if(argp<(0x00)) return(b);
argp = (argp%(wedd));
b = cv_in_persian_fig(ct_wk(argp,&te));
if(!b) return(b);
return(cat_xe(catt(week,sp,(void*)(0x00)),b,(void*)(0x00)));
}
