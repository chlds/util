/* **** Notes

Copy
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl wr_rd(signed(*fd))) {
auto signed char *b;
auto signed i,r;
if(!fd) return(0x00);
AND(i,0x00);
OR(i,0x01);
SHL(i,0x0E);
i = (1000*(i));
--i;
r = (i);
r++;
r = (r*(sizeof(*b)));
b = (signed char(*)) alloc(r);
if(!b) {
printf("%s \n","<< Error at fn. alloc()");
return(0x00);
}
r = wr_rd_r(fd,b,r);
// if(!r) printf("%s \n","<< Error at fn. wr_rd_r()");
// e.g., 0B written.
// embed(i,b);
embed_l(i,b);
rl(b);
b = (0x00);
return(r);
}
