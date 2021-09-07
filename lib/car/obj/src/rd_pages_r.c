/* **** Notes

Read.
//*/


# define CAR
# include <io.h>
# include <stdio.h>
# include <errno.h>
# include "../../../incl/config.h"

signed(__cdecl rd_pages_r(page_t(*argp),signed(fd))) {

auto signed char *b;
auto page_t *page;
auto signed i,r;
auto signed short flag;
auto signed char delim[] = {
// SP,
LF,
0x00,
};

if(!argp) return(0x00);
if(fd<(0x00)) return(0x00);

b = (0x00);
r = rd_b(&b,delim,fd);
if(!b) {
printf("%s \n","<< Error at fn. rd_b()");
return(0x00);
}
if(!r) {
embed(0x00,b);
if(b) rl(b);
b = (0x00);
return(0x00);
}

r = bind_pages(CLI_BR,argp);
if(!r) {
printf("%s \n","<< Error at fn. bind_pages()");
return(0x00);
}

page = (*(CLI_INDEX+(R(page,*argp))));
if(!page) {
printf("%s \n","<< No page..");
return(0x00);
}
if(*(CLI_BASE+(R(b,*page)))) {
printf("%s \n","<< Already allocated to the b..");
return(0x00);
}

*(CLI_BASE+(R(b,*page))) = (b);
r = rm_br(b);
if(!r) {
printf("%s \n","<< Error at fn. rm_br()");
return(0x00);
}

b = (0x00);

return(0x01+(rd_pages_r(argp,fd)));
}
