/*

Write.

Along with C and Windows libraries

Remarks:
Refer at fn. cli_spool_beta, fn. cli_book, fn. cli_save, fn. cli_parse or..
*/


# define CBR
# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/stat.h>
# include <sys/types.h>
# include "../../../incl/config.h"

signed(__cdecl cli_write(signed(descriptor),CLI_TYPEWRITER(*argp))) {

auto cli_page_t *page;
auto signed char *p;
auto signed fd;
auto signed access;
auto signed permission;
auto signed i,r;
auto signed short breaker;
auto signed short flag;
auto signed char c;
static signed char *crlf = ("\r\n");
static signed char *lf = ("\n");

if(descriptor<(0x00)) return(0x00);
if(!argp) return(0x00);

AND(flag,0x00);
if(!(LINEBREAK_CRLF^(R(linebreak_form,R(config,*argp))))) OR(flag,0x01);

AND(i,0x00);
page = (*(CLI_BASE+(R(page,R(spool,*argp)))));
while(page) {
AND(breaker,0x00);
if(CLI_PBR&(R(flag,*page))) OR(breaker,0x01);
p = (*(CLI_BASE+(R(base,*page))));
r = wr_b(descriptor,p,ct(p));
if(!(r^(~0x00))) {
printf("%s \n","<< Error at fn. wr_b()");
return(0x00);
}
ADD(i,r);
page = (R(d,*page));
if(page) {
if(breaker) {
p = (lf);
if(flag) p = (crlf);
r = wr_b(descriptor,p,ct(p));
if(!(r^(~0x00))) {
printf("%s \n","<< Error at fn. wr_b()");
return(0x00);
}
ADD(i,r);
}}}

return(i);
}
