# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cvwknum_te_in_be_by_r(time_t(*args),signed(argp))) {
auto signed char *b;
auto time_t te;
auto signed wedd = (0x03);
auto signed char sp[] = (" ");
auto signed char week[] = {
0xD1,0x82,0xD1,0x8B,0xD0,0xB4,0xD0,0xB7,
0xD0,0xB5,0xD0,0xBD,0xD1,0x8C,0x00,
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
b = catindx_xe(argp,b);
return(cat_xe(b,catt(sp,week,(void*)(0x00)),(void*)(0x00)));
}
