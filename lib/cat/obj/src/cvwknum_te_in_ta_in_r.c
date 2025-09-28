# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cvwknum_te_in_ta_in_r(time_t(*args),signed(argp))) {
auto signed char *b;
auto time_t te;
auto signed wedd = (0x03);
auto signed char sp[] = (" ");
auto signed char ordl[] = {
'-',0xE0,0xAE,0x86,0xE0,0xAE,0xAE,0xE0,0xAF,0x8D,0x00,
};
auto signed char week[] = {
0xE0,0xAE,0xB5,0xE0,0xAE,0xBE,0xE0,0xAE,0xB0,0xE0,0xAE,0xAE,
0xE0,0xAF,0x8D,0x00,
};
b = (0x00);
if(!args) return(b);
te = (*args);
if(te<(0x00)) return(b);
if(argp<(0x00)) return(b);
argp = (argp%(wedd));
b = cvwknum_te(&te,argp);
if(!b) return(b);
if(!('0'^(*b))) b = cas_xe(b);
return(catna(week,catna(sp,catna(ordl,b))));
}
