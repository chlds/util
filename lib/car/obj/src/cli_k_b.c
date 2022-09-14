/* **** Notes

I/O

Remarks:
Based on UTF-8
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl cli_k_b(signed(colm),signed(arg/* align */),signed char(*sy),signed char(**argp))) {
auto signed r;
auto signed offs[OBJS];
if(!argp) return(0x00);
// if(!(*argp)) return(0x00);
if(colm<(0x01)) colm = (COLM);
if(COLM<(colm)) colm = (COLM);
if(ALIGN<(arg)) arg = (ALIGN);
if(arg<(0x01)) arg = (ALIGN);
if(!(EQ(OBJS,init_a_d(OBJS,offs)))) {
printf("%s \n","<< Error at fn. init_a_d()");
return(0x00);
}
if(!(EQ(OBJS,init_va(0x00,OBJS,argp)))) {
printf("%s \n","<< Error at fn. init_va()");
return(0x00);
}
r = cli_k_b_r(colm,arg,offs,sy,argp);
if(EQ(CTRL_J,r)) return(r);
if(EQ(CTRL_M,r)) return(r);
if(!r) printf("%s \n","<< Error at fn. cli_k_b_r()");
if(!(EQ(OBJS,init_va(OBJS,OBJS,argp)))) {
printf("%s \n","<< Error at fn. init_va()");
return(0x00);
}
if(!(EQ(OBJS,init_a_d(OBJS,offs)))) {
printf("%s \n","<< Error at fn. init_a_d()");
return(0x00);
}
return(r);
}
