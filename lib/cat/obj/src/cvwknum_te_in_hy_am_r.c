# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cvwknum_te_in_hy_am_r(time_t(*args),signed(argp))) {
auto signed char **w;
auto signed char *b;
auto time_t te;
auto signed wedd = (0x03);
auto signed char sp[] = (" ");
auto signed char hypn[] = ("-");
auto signed char week[] = {
0xD5,0xB7,0xD5,0xA1,0xD5,0xA2,0xD5,0xA1,
0xD5,0xA9,0x00,
};
auto signed char ordl0[] = {
0xD5,0xAB,0xD5,0xB6,0x00,
};
auto signed char ordl1[] = {
0xD6,0x80,0xD5,0xA4,0x00,
};
auto signed char *(ordl[]) = {
ordl1,
ordl0,
0x00,
};
b = (0x00);
if(!args) return(b);
te = (*args);
if(te<(0x00)) return(b);
if(argp<(0x00)) return(b);
argp = (argp%(wedd));
b = cvwknum_te(&te,argp);
if(!b) return(b);
w = (ordl);
if(come("01",b)) w++;
if(!('0'^(*b))) b = cas_xe(b);
return(catna(week,catna(sp,catna(*w,catna(hypn,b)))));
}
