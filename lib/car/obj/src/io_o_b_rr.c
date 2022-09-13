/* **** Notes

I/O

Remarks:
Based on UTF-8
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl io_o_b_rr(signed(colm),signed(arg),signed(*offs),signed char(*sy),signed char(**argp))) {
auto signed char *b;
auto pg_t *p;
auto signed r;
auto signed short flag;
auto signed curr_offs[OBJS];
auto signed enable = (0x01);
if(!offs) return(0x00);
if(!argp) return(0x00);
if(!(EQ(OBJS,cpy_a_d(OBJS,curr_offs,offs)))) return(0x00);
b = (0x00);
if(!(cat_b(&b,*argp,(void*)0x00))) {
rl(b);
b = (0x00);
AND(r,0x00);
INC(r);
r = (r*(sizeof(*b)));
b = (signed char(*)) alloc(r);
if(!b) return(0x00);
*b = (0x00);
}
r = io_o_b_rrr(colm,arg,offs,sy,argp);
if(EQ(CTRL_W,r)) r = backward_del(sy,b);
if(EQ(CLIH_UNDO,r)) {
if(!(EQ(OBJS,cpy_a_d(OBJS,offs,curr_offs)))) return(0x00);
embed(0x00,*argp);
rl(*argp);
*argp = (0x00);
if(b) {
if(*b) {
if(!(cat_b(argp,b,(void*)0x00))) {
printf("%s \n","<< Error at fn. cat_b()");
AND(r,0x00);
}}}}
embed(0x00,b);
rl(b);
b = (0x00);
return(r);
}
