/* **** Notes

I/O

Remarks:
Based on UTF-8
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl k_b_r(signed(colm),signed(arg),signed char(*sy),signed char(**argp))) {
auto signed r;
if(!argp) return(0x00);
// if(!(*argp)) return(0x00);
r = cli_k_b(colm,arg,sy,argp);
r = clih_fn(r,0x00);
if(EQ(CTRL_Q,r)) return(r);
if(EQ(CTRL_J,r)) return(r);
if(EQ(CTRL_M,r)) return(r);
if(!r) {
// CTRL_AT or..
printf("%s \n","<< Error at fn. clih_fn/cli_k_b()");
return(0x00);
}
return(k_b_r(colm,arg,sy,argp));
}
