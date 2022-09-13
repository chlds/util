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
auto signed(__cdecl*f)(signed argf);
auto signed(__cdecl*(fn[]))(signed argf) = {
es,
0x00,
};
auto signed argf[] = {
CTRL_L,
0x00,
};
auto signed ctrlkey[] = {
CTRL_X,
0x00,
};
if(!argp) return(0x00);
// if(!(*argp)) return(0x00);
r = cli_k_b(colm,arg,sy,argp);
if(EQ(CTRL_Q,r)) return(r);
if(EQ(CTRL_J,r)) return(r);
if(EQ(CTRL_M,r)) return(r);
// if(EQ(CTRL_Q,r)) return(0x01);
if(!r) {
// CTRL_AT or..
printf("%s \n","<< Error at fn. cli_k_b()");
return(0x00);
}
//
r = ord_d(ctrlkey,r);
if(r<(ct_d(ctrlkey))) {
f = (*(r+(fn)));
if(!(f(*(r+(argf))))) {
printf("%s \n","<< Error at fn. f()");
return(0x00);
}}
return(k_b_r(colm,arg,sy,argp));
}
