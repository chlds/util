/* **** Notes

I/O

Remarks:
Based on UTF-8
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl io_o_b_r(signed(colm),signed(y),signed(arg),signed(*offs),signed char(*sy),signed char(**argp))) {
auto signed char *b;
auto pg_t *p;
auto signed r;
auto signed oldoffs;
auto signed short flag;
auto signed enable = (0x01);
if(!argp) return(0x00);
b = cli_in_b();
if(!b) {
printf("%s \n","<< Error at fn. cli_in_b()");
return(0x00);
}
// CTRL & ESC
r = (signed) (0xFF&(*b));
if(EQ(DEL,r)) r = (CTRL_D);
if(r<(CTRL_KEYS)) {
if(EQ(ESC,r)) {
if(EQ(0x01,ct(b))) r = (CTRL_Q);
}
embed(0x00,b);
rl(b);
b = (0x00);
return(ctrl_fn_key(r,argp));
}
// Output
AND(flag,0x00);
if(*(CLIH_BASE+(argp))) {
if(**(CLIH_BASE+(argp))) {
embed(0x00,*(CLIH_OFFSET+(argp)));
rl(*(CLIH_OFFSET+(argp)));
*(CLIH_OFFSET+(argp)) = (0x00);
if(!(cat_b(CLIH_OFFSET+(argp),*(CLIH_BASE+(argp)),(void*)0x00))) OR(flag,CLIH_ERROR);
}}
r = cat_b(argp,b,(void*)0x00);
embed(0x00,b);
rl(b);
b = (0x00);
if(!r) {
printf("%s \n","<< Error at fn. cat_b()");
return(0x00);
}
if(!flag) {
r = ct(*argp);
if(!y) y = coord_y_b();
if(!(caret_b(1,y))) OR(flag,CLIH_ERROR);
if(!flag) {
if(!(mon_b(enable,0x00,argp))) OR(flag,CLIH_ERROR);
if(!flag) {
oldoffs = (*offs);
r = out_o_pa(colm,arg,offs,sy,*argp);
if(!r) {
printf("%s \n","<< Error at fn. out_o_pa()");
OR(flag,CLIH_ERROR);
}}}}
if(CLIH_ERROR&(flag)) return(0x00);
if(!(EQ(oldoffs,*offs))) AND(y,0x00);
return(io_o_b_r(colm,y,arg,offs,sy,argp));
}
