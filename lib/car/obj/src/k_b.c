/* **** Notes

I/O

Remarks:
Call fn. rl later
Based on UTF-8
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed char *(__cdecl k_b(signed(colm),signed(arg),signed char(*sy))) {
auto signed char **v;
auto signed char *b;
auto signed r;
auto signed short flag;
auto signed char *(a[OBJS]);
if(COLM<(colm)) colm = (COLM);
if(colm<(0x01)) colm = (COLM);
AND(flag,0x00);
v = (a);
r = k_b_r(colm,arg,sy,v);
b = (0x00);
if(!r) OR(flag,0x01);
if(EQ(CTRL_Q,r)) OR(flag,0x01);
if(!flag) {
if(*v) {
if(!(cat_b(&b,*v,(void*)0x00))) {
embed(0x00,b);
rl(b);
b = (0x00);
}}}
if(!(EQ(OBJS,init_va(OBJS,OBJS,v)))) {
printf("%s \n","<< Error at fn. init_va()");
return(0x00);
}
return(b);
}
