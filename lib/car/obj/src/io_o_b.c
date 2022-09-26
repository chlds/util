/* **** Notes

I/O

Remarks:
Based on UTF-8
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl io_o_b(signed(colm),signed(arg),signed(*offs),signed char(*sy),signed char(**argp))) {
auto signed char *b;
auto pg_t *p;
auto signed r;
auto signed short flag;
if(!offs) return(0x00);
if(!argp) return(0x00);
// if(!(*argp)) return(0x00);
r = io_o_b_r(colm,arg,offs,sy,argp);
if(EQ(CTRL_Q,r)) return(r);
if(EQ(CTRL_W,r)) return(r);
if(EQ(CTRL_X,r)) return(r);
if(EQ(CTRL_J,r)) return(r);
if(EQ(CTRL_M,r)) return(r);
if(EQ(CTRL_H,r)) return(CLIH_UNDO);
if(EQ(CTRL_Z,r)) return(CLIH_UNDO);
if(EQ(CTRL_O,r)) {
if(!(clih_pin(*argp))) return(0x00);
}
if(!r) {
// CTRL_AT or..
printf("%s \n","<< Error at fn. io_o_b_r()");
return(0x00);
}
//*
b = dupl_offset(ct(*argp),*(CLIH_DIFF+(argp)));
if(b) {
embed(0x00,*(CLIH_INDEX+(argp)));
rl(*(CLIH_INDEX+(argp)));
*(CLIH_INDEX+(argp)) = (b);
}
//*/
return(io_o_b(colm,arg,offs,sy,argp));
}
