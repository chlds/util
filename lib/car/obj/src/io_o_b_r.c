/* **** Notes

I/O

Remarks:
Based on UTF-8
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl io_o_b_r(signed(colm),signed(arg),signed(*offs),signed char(*sy),signed char(**argp))) {
auto signed r;
auto signed x,y;
if(!offs) return(0x00);
if(!argp) return(0x00);
x = coord_x_b();
y = coord_y_b();
r = io_o_b_rr(colm,arg,offs,sy,argp);
if(EQ(CLIH_UNDO,r)) {
if(!(caret_b(x,y))) {
printf("%s \n","<< Error at fn. caret_b()");
return(0x00);
}}
return(r);
}
