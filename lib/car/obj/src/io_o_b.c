/* **** Notes

I/O

Remarks:
Based on UTF-8
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl io_o_b(signed(colm),signed(y),signed(arg),signed(*offs),signed char(*sy),signed char(**argp))) {
auto pg_t *p;
auto signed r;
auto signed short flag;
if(!offs) return(0x00);
if(!argp) return(0x00);
// if(!(*argp)) return(0x00);
r = io_o_b_r(colm,y,arg,offs,sy,argp);
if(EQ(CTRL_Q,r)) return(r);
if(!r) {
// CTRL_AT or..
printf("%s \n","<< Error at fn. io_o_b_r()");
return(0x00);
}
return(io_o_b(colm,y,arg,offs,sy,argp));
}
