# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cvwknum_te_in_de_de(time_t(*argt),signed(args),signed(argp))) {
auto signed char **w;
auto signed char *b;
auto signed char *p;
auto time_t te;
auto signed wedd = (0x03);
auto signed digit = (0x00);
auto signed char sp[] = (" ");
auto signed char sepr[] = ("-");
auto signed char *(a[]) = {
"Woche",
"W",
0x00,
};
b = (0x00);
if(!argt) return(b);
if(args<(0x00)) return(b);
args = (args%(wedd));
w = (a);
p = (sp);
if(argp) {
p = (0x00);
w++;
}
if(!w) return(b);
te = (*argt);
if(te<(0x00)) return(b);
b = cat_xe(catt(*w,p,(void*)(0x00)),(void*)(0x00));
b = cat_xe(b,cvwknum_te(&te,args),(void*)(0x00));
args++;
b = cat_xe(b,catt(sepr,(void*)(0x00)),cv(digit,args),(void*)(0x00));
return(b);
}
