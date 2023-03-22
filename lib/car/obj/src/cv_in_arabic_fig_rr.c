# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl cv_in_arabic_fig_rr(signed short(radix),signed(arg))) {
auto signed char *b;
auto signed char fig_0[] = {
0xD9,0xA0,0x00,
};
auto signed char fig_1[] = {
0xD9,0xA1,0x00,
};
auto signed char fig_2[] = {
0xD9,0xA2,0x00,
};
auto signed char fig_3[] = {
0xD9,0xA3,0x00,
};
auto signed char fig_4[] = {
0xD9,0xA4,0x00,
};
auto signed char fig_5[] = {
0xD9,0xA5,0x00,
};
auto signed char fig_6[] = {
0xD9,0xA6,0x00,
};
auto signed char fig_7[] = {
0xD9,0xA7,0x00,
};
auto signed char fig_8[] = {
0xD9,0xA8,0x00,
};
auto signed char fig_9[] = {
0xD9,0xA9,0x00,
};
auto signed char *(fig[]) = {
fig_0,
fig_1,
fig_2,
fig_3,
fig_4,
fig_5,
fig_6,
fig_7,
fig_8,
fig_9,
"A",
"B",
"C",
"D",
"E",
"F",
0x00,
};
b = (0x00);
if(!(cv_in_arabic_fig_rrr(&b,fig,radix,arg))) {
rl(b);
b = (0x00);
}
return(b);
}
