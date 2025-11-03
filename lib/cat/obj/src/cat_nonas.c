# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cat_nonas(signed(argp))) {
auto signed char **w;
auto signed char l[] = ("NONAS");
auto signed char l_decor[] = {
0xC9,0xB4,0xE1,0xB4,0x8F,0xC9,0xB4,\
0xE1,0xB4,0x80,0xEA,0x9C,0xB1,\
0x00,
};
auto signed char *(e[]) = {
l_decor,
l,
0x00,
};
w = (e);
if(!argp) w++;
return(cathy(*w));
}
