# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cat_qvartvm(signed(argp))) {
auto signed char **w;
auto signed char *b;
auto signed char l[] = ("QVARTVM");
auto signed char l_decor[] = {
/*0xEA,0x9E,0xAF,*/'q',0xE1,0xB4,0xA0,\
0xE1,0xB4,0x80,0xCA,0x80,0xE1,0xB4,0x9B,\
0xE1,0xB4,0xA0,0xE1,0xB4,0x8D,\
0x00,
};
auto signed char *(a[]) = {
l_decor,
l,
0x00,
};
b = (0x00);
w = (a);
if(!argp) w++;
return(cath(*w,b));
}
