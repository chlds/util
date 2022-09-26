/* **** Notes

I/O

Remarks:
Based on UTF-8
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl io_o_b_rrr(signed(colm),signed(arg),signed(*offs),signed char(*sy),signed char(**argp))) {
auto signed char *b;
auto pg_t *p;
auto signed r;
auto signed y;
auto signed short flag;
auto signed enable = (0x01);
if(!offs) return(0x00);
if(!argp) return(0x00);
// output
AND(flag,0x00);
r = ct(*argp);
y = coord_y_b();
if(!(caret_b(1,y))) OR(flag,CLIH_ERROR);
if(!flag) {
if(*argp) {
if(**argp) {
r = out_o_pa(colm,arg,offs,sy,*argp);
if(!r) {
printf("%s \n","<< Error at fn. out_o_pa()");
OR(flag,CLIH_ERROR);
}}}}
if(CLIH_ERROR&(flag)) return(0x00);
if(!(clear_rows(~0x00))) return(0x00);
if(!(mon_b(enable,0x00,offs,argp))) return(0x00);
// input
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
//*
embed(0x00,*(CLIH_DIFF+(argp)));
rl(*(CLIH_DIFF+(argp)));
*(CLIH_DIFF+(argp)) = (0x00);
//*/
r = cat_b(argp,b,(void*)0x00);
embed(0x00,b);
rl(b);
b = (0x00);
if(!r) {
printf("%s \n","<< Error at fn. cat_b()");
return(0x00);
}
return(io_o_b(colm,arg,offs,sy,argp));
}
