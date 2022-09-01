/* **** Notes

I/O

Remarks:
Based on UTF-8
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl io_o_b(signed(colm),signed(arg),signed char(*sy),signed char(*argp))) {
auto signed char *(b[OBJS]);
auto pg_t *p;
auto signed r;
auto signed y;
auto signed offs;
auto signed short flag;
// if(!argp) return(0x00);
// if(!(*argp)) return(0x00);
if(colm<(0x01)) colm = (COLM);
if(COLM<(colm)) colm = (COLM);
if(ALIGN<(arg)) arg = (ALIGN);
if(arg<(0x01)) arg = (ALIGN);
AND(flag,0x00);
if(!(EQ(OBJS,init_va(0x00,OBJS,b)))) {
printf("%s \n","<< Error at fn. init_va()");
return(0x00);
}
AND(offs,0x00);
AND(y,0x00);
r = io_o_b_r(colm,y,offs,arg,sy,b);
if(!r) printf("%s \n","<< Error at fn. io_o_b_r()");
if(!(EQ(OBJS,init_va(0x01,OBJS,b)))) {
printf("%s \n","<< Error at fn. init_va()");
return(0x00);
}
return(r);
}
