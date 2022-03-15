/* **** Notes

Read.
//*/


# define CAR
# include <io.h>
# include <stdio.h>
# include <errno.h>
# include "../../../incl/config.h"

signed(__cdecl rd_pages_r(signed(fd),page_t(*argp))) {

auto signed char *b;
auto page_t *p;
auto signed r;
auto signed short flag;
auto signed char delim[] = {
// SP,
LF,
0x00,
};

if(fd<(0x00)) return(0x00);
if(!argp) return(0x00);

b = (0x00);
r = rd_f(&b,delim,fd);
if(!b) {
printf("%s \n","<< Error at fn. rd_f()");
return(0x00);
}
if(!r) {
embed(0x00,b);
if(b) rl(b);
b = (0x00);
return(0x00);
}

AND(flag,0x00);
r = ct(b);
if(r) {
if(EQ(LF,*(--r+(b)))) OR(flag,CLI_BR);
}

r = bind_pages(flag,argp);
if(!r) {
printf("%s \n","<< Error at fn. bind_pages()");
return(0x00);
}

p = (*(CLI_INDEX+(R(page,*argp))));
if(!p) {
printf("%s \n","<< No page..");
return(0x00);
}

if(*(CLI_BASE+(R(b,*p)))) {
printf("%s \n","<< Already allocated to the b..");
return(0x00);
}

*(CLI_BASE+(R(b,*p))) = (b);
r = rm_br(b);
/* e.g., no break
if(!r) {
printf("%s \n","<< Error at fn. rm_br()");
return(0x00);
}
//*/

p = (0x00);
b = (0x00);

return(0x01+(rd_pages_r(fd,argp)));
}
