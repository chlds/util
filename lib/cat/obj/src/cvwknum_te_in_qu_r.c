# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cvwknum_te_in_qu_r(time_t(*args),signed(argp))) {
auto signed char *b;
auto time_t te;
auto signed wedd = (0x03);
auto signed char sp[] = (" ");
auto signed char week[] = ("semana");
b = (0x00);
if(!args) return(b);
te = (*args);
if(te<(0x00)) return(b);
if(argp<(0x00)) return(b);
argp = (argp%(wedd));
b = cvwknum_te(&te,argp);
if(!b) return(b);
if(!('0'^(*b))) b = cas_xe(b);
return(cat_xe(b,cath(sp,week,(void*)(0x00)),(void*)(0x00)));
}
