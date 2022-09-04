/* **** Notes

I/O

Remarks:
Based on UTF-8
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl io_o_b_r(signed(colm),signed(arg),signed(*y),signed(*offs),signed char(*sy),signed char(**argp))) {
auto signed char *b;
auto pg_t *p;
auto signed r;
auto signed curr_y;
auto signed curr_offs;
auto signed short flag;
auto signed enable = (0x01);
if(!y) return(0x00);
if(!offs) return(0x00);
if(!argp) return(0x00);
curr_y = (*y);
curr_offs = (*(CLIH_BASE+(offs)));
b = (0x00);
if(!(cat_b(&b,*(CLIH_BASE+(argp)),(void*)0x00))) {
rl(b);
b = (0x00);
AND(r,0x00);
INC(r);
r = (r*(sizeof(*b)));
b = (signed char(*)) alloc(r);
if(!b) return(0x00);
*b = (0x00);
}
r = io_o_b_rr(colm,arg,y,offs,sy,argp);
//*
AND(flag,0x00);
if(EQ(CLIH_UNDO,r)) OR(flag,0x01);
if(flag) {
*y = (curr_y);
*offs = (curr_offs);
embed(0x00,*(CLIH_BASE+(argp)));
rl(*(CLIH_BASE+(argp)));
*(CLIH_BASE+(argp)) = (0x00);
if(b) {
if(*b) {
r = cat_b(CLIH_BASE+(argp),b,(void*)0x00);
if(!r) printf("%s \n","<< Error at fn. cat_b()");
}}}
//*/
embed(0x00,b);
rl(b);
b = (0x00);
return(r);
}
