# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cvwknum_te_in_as_in_r(time_t(*args),signed(argp))) {
auto signed char *b;
auto time_t te;
auto signed wedd = (0x03);
auto signed char a[] = (" ");
auto signed char week[] = {
0xE0,0xA6,0xB8,0xE0,0xA6,0xAA,0xE0,0xA7,0x8D,0xE0,0xA6,0xA4,
0xE0,0xA6,0xBE,0xE0,0xA6,0xB9,0x00,
};
b = (0x00);
if(!args) return(b);
te = (*args);
if(te<(0x00)) return(b);
if(argp<(0x00)) return(b);
argp = (argp%(wedd));
b = cv_in_bengali_assamese_fig(ct_wk(argp,&te));
if(!b) return(b);
if(!('0'^(*b))) b = cas_xe(b);
return(catha(week,catha(a,b)));
}
