# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cvwknum_te_in_pa_guru_in_r(time_t(*args),signed(argp))) {
auto signed char *b;
auto time_t te;
auto signed wedd = (0x03);
auto signed char sp[] = (" ");
auto signed char week[] = {
0xE0,0xA8,0xB9,0xE0,0xA8,0xAB,0xE0,0xA8,0xBC,0xE0,0xA8,0xA4,
0xE0,0xA8,0xBE,0x00,
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
