# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cat_nonas(signed(argp))) {
auto signed char **w;
auto signed char *b;
auto signed char l[] = ("NONAS");
auto signed char l_decor[] = {
0xC9,0xB4,0xE1,0xB4,0x8F,0xC9,0xB4,\
0xE1,0xB4,0x80,0xEA,0x9C,0xB1,\
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
