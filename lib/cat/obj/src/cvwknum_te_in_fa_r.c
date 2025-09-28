# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cvwknum_te_in_fa_r(time_t(*args),signed(argp))) {
auto signed char *b;
auto time_t te;
auto signed wedd = (0x03);
auto signed char sp[] = (" ");
auto signed char week[] = {
0xD9,0x87,0xD9,0x81,0xD8,0xAA,0xD9,0x87,
// 0xD9,0x94,
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
return(catha(week,catha(sp,b)));
}
