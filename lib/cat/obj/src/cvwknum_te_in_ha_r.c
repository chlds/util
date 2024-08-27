# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cvwknum_te_in_ha_r(time_t(*args),signed(argp))) {
auto signed char **w;
auto signed char *b;
auto time_t te;
auto signed wedd = (0x03);
auto signed char sp[] = (" ");
auto signed char week0[] = ("sati");
auto signed char week1[] = ("mako na");
auto signed char *(week[]) = {
week1,
week0,
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
w = (week);
if(!('0'^(*b))) {
b = cas_xe(b);
w++;
}
return(cat_xe(catt(*w,sp,(void*)(0x00)),b,(void*)(0x00)));
}
