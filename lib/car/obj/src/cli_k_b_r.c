/* **** Notes

I/O

Remarks:
Based on UTF-8
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl cli_k_b_r(signed(colm),signed(arg),signed(*y),signed(*offs),signed char(*sy),signed char(**argp))) {
auto signed r;
if(!y) return(0x00);
if(!offs) return(0x00);
if(!argp) return(0x00);
// if(!(*argp)) return(0x00);
r = io_o_b(colm,arg,y,offs,sy,argp);
if(EQ(CTRL_Q,r)) return(r);
if(EQ(CTRL_X,r)) return(r);
if(!r) {
// CTRL_AT or..
printf("%s \n","<< Error at fn. io_o_b()");
return(0x00);
}
return(cli_k_b_r(colm,arg,y,offs,sy,argp));
}
