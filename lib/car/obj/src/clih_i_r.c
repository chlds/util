# define CAR_H
# define STDIO_H
# include <conio.h>
# include "./../../../config.h"

signed char *(__cdecl clih_i_r(void)) {
auto signed char *b;
auto signed r;
auto signed byte = (0x03);
auto signed meta = (0xE0);
auto signed mask = (0xFF);
b = clih_i_rr();
if(!b) return(b);
r = (signed) (mask&(*b));
if(EQ(DEL,r)) *b = (signed char) (mask&(CTRL_D));
if(EQ(meta,r)) {
if(!(EQ(byte,ct(b)))) b = cat_xe(catt_bb(ESC),b,(void*)0x00);
}
return(b);
}
