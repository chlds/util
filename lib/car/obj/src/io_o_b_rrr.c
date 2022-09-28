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
if(!offs) return(0x00);
if(!argp) return(0x00);
// output
r = ct(*argp);
y = coord_y_b();
if(!(caret_b(1,y))) return(0x00);
if(*argp) {
if(**argp) {
r = out_o_pa(colm,arg,offs,sy,*argp);
if(!r) {
printf("%s \n","<< Error at fn. out_o_pa()");
return(0x00);
}}}
if(!(clear_rows(~0x00))) return(0x00);
if(!(mon_b(0x01/* enable */,0x00,offs,argp))) return(0x00);
return(io_o_b_rrrr(colm,arg,offs,sy,argp));
}
