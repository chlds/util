/* **** Notes

Write.
//*/


# define CAR
# include <io.h>
# include <stdio.h>
# include <errno.h>
# include "../../../incl/config.h"

signed(__cdecl wr_pages_r(signed(fd),page_t(*argp))) {

auto signed char *b;
auto signed r;
auto signed short flag;
auto signed char *br = ("\n");

if(fd<(0x00)) return(0x00);
if(!argp) return(0x00);

b = (*(CLI_BASE+(R(b,*argp))));
if(!b) {
printf("%s \n","<< No memory block allocated to the b..");
return(0x00);
}

AND(flag,0x00);
r = wr_b(fd,b,ct(b));
if(!(r^(~0x00))) OR(flag,0x02);
if(!r) {
if(!(CLI_BR&(*(CLI_BASE+(R(flag,*argp)))))) OR(flag,0x01);
}

if(flag) {
if(0x01&(flag)) printf("%s \n","<< No CLI_BR on the page..");
if(0x02&(flag)) printf("%s \n","<< Error at fn. wr_b()");
return(0x00);
}

flag = (*(CLI_BASE+(R(flag,*argp))));
if(CLI_BR&(flag)) {
AND(flag,0x00);
r = wr_b(fd,br,ct(br));
if(!r) OR(flag,0x01);
if(!(r^(~0x00))) OR(flag,0x02);
if(flag) {
printf("%s %Xh \n","<< Error at fn. wr_b() and flag",flag);
return(0x00);
}}

argp = (*(CLI_DI+(R(page,*argp))));
b = (0x00);

return(0x01+(wr_pages_r(fd,argp)));
}
