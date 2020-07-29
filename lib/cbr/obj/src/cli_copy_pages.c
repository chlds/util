/*

Copy pages.

Along with C library

Remarks:
Refer at fn. cli_clip_beta.
*/


# define CLI_MACRO

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_copy_pages(signed short(linebreak_form),signed(count),signed(size),signed short(*w),CLI_PAGE(*argp))) {

/* **** DATA, BSS and STACK */
auto signed short CR = (0x0D);
auto signed short LF = (0x0A);

auto CLI_PAGE *page;
auto signed char *p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(count<(0x01)) return(0x00);
if(size<(0x01)) return(0x00);
if(!w) return(0x00);
if(!argp) return(0x00);

p = (*(CLI_BASE+(R(base,*argp))));
if(!p) {
printf("%s\n","<< No buffer at *(CLI_BASE+(R(base,*argp..");
return(0x00);
}

r = ct(p);
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. ct()");
return(0x00);
//*/
}

r++;
r = (r*(sizeof(signed short)));
i = (size);
size = (-r+(size));
if(size<(0x00)) {
printf("%s\n","<< Could not assign..");
return(0x00);
}

r = decode2w(i,w,p);
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. decode2w()");
return(0x00);
//*/
}

while(r) {
w++;
--r;
}

*w = (0x00);

flag = (0x00);
if(CLI_PBR&(R(flag,*argp))) flag++;

--count;
if(!count) return(0x00);

argp = (R(d,*argp));
if(!argp) return(0x00);

if(flag) {
if(!(LINEBREAK_CRLF^(linebreak_form))) {
r = (0x01);
r = (r*(sizeof(signed short)));
size = (-r+(size));
if(size<(0x00)) {
printf("%s\n","<< Could not assign..");
return(0x00);
}
*w = (CR);
w++;
}
*w = (LF);
w++;
}

return(0x01+(cli_copy_pages(linebreak_form,count,size,w,argp)));
}
