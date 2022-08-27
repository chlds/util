/* **** Notes

I/O

Remarks:
Based on UTF-8
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl io_o_b_r(signed(colm),signed(arg),signed(offs),signed char(*sy),signed char(**argp))) {
auto signed char *b;
auto pg_t *p;
auto signed r;
auto signed short flag;
auto signed enable = (0x01);
if(!argp) return(0x00);
b = cli_in_b();
if(!b) {
printf("%s \n","<< Error at fn. cli_in_b()");
return(0x00);
}
// CTRL & ESC
AND(flag,0x00);
r = (signed) (0xFF&(*b));
if(EQ(DEL,r)) r = (CTRL_D);
if(r<(CTRL_KEYS)) {
if(EQ(ESC,r)) {
if(EQ(0x01,ct(b))) OR(flag,CLIH_QUIT);
}
embed(0x00,b);
rl(b);
b = (0x00);
if(CLIH_QUIT&(flag)) return(0x01);
// return(ctrl_fn_key(r,argp));
return(0x01+(io_o_b_r(colm,arg,offs,sy,argp)));
}
// Output
AND(flag,0x00);
r = cat_b(argp,b,(void*)0x00);
if(!r) {
printf("%s \n","<< Error at fn. cat_b()");
OR(flag,CLIH_ERROR);
}
if(!flag) {
r = ct(*argp);
if(!(EQ(CLIH_INDEX,rule_va(r,CLIH_INDEX,argp)))) OR(flag,CLIH_ERROR);
if(!flag) {
if(!(caret_b(1,coord_y_b()))) OR(flag,CLIH_ERROR);
if(!flag) {
if(!(mon_b(enable,0x00,argp))) OR(flag,CLIH_ERROR);
if(!flag) {
r = out_o_pa(colm,arg,&offs,sy,*argp);
if(!r) {
printf("%s \n","<< Error at fn. out_o_pa()");
OR(flag,CLIH_ERROR);
}}}}}
embed(0x00,b);
rl(b);
b = (0x00);
if(CLIH_ERROR&(flag)) return(0x00);
return(0x01+(io_o_b_r(colm,arg,offs,sy,argp)));
}
