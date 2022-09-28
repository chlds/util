/* **** Notes

I/O

Remarks:
Based on UTF-8
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl io_o_b_rrrr(signed(colm),signed(arg),signed(*offs),signed char(*sy),signed char(**argp))) {
auto signed char *b;
auto pg_t *p;
auto signed r;
if(!offs) return(0x00);
if(!argp) return(0x00);
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
