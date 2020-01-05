/*

Load.

Along with C library

Remarks:
Refer at fn. cli_bind_pages and fn. cli_concat_pages.
*/


# define CLI_MACRO

# include <io.h>
# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/stat.h>
# include <sys/types.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_load_internal(signed(descriptor),CLI_TYPEWRITER(*argp))) {

/* **** DATA, BSS and STACK */
static signed char CR = ('\r');
static signed char LF = ('\n');

auto signed char *cur,*p;
auto signed i,r;
auto signed short flag;
auto signed char c;

/* **** CODE/TEXT */
if(!argp) return(0x00);

cur = (*(CLI_BASE+(R(base,R(roll,*argp)))));
p = (cur);
i = (R(size,R(roll,*argp)));
flag = (0x00);

while(0x01) {
if(!i) {
*(--cur) = (0x00);
OR(R(flag,*argp),CLI_IRR);
printf("%s\n","<< Reach the limit..");
return(0x00);
}
r = read(descriptor,&c,sizeof(signed char));
if(!(r^(~(0x00)))) {
OR(R(flag,*argp),CLI_IRR);
printf("%s\n","<< Error at fn. read()");
return(0x00);
}
if(!r) {
flag = (CLI_MORPH);
*cur = (0x00);
break;
}
if(flag) {
if(!(LF^(c))) {
*(--cur) = (0x00);
break;
}}
if(!(LF^(c))) {
*cur = (0x00);
break;
}
if(!(CR^(c))) flag = (0x01);
else flag = (0x00);
*cur = (c);
cur++;
--i;
}

r = ct(p);
r++;
r = (r*(sizeof(signed char)));
p = (signed char(*)) malloc(r);
if(!p) {
printf("%s\n","<< Error at fn. malloc()");
return(0x00);
}

r = cpy(p,*(CLI_BASE+(R(base,R(roll,*argp)))));
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cpy()");
return(0x00);
//*/
}

r = cli_bind_pages(&(R(spool,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_bind_pages()");
return(0x00);
}

*(CLI_BASE+(R(base,**(CLI_INDEX+(R(page,R(spool,*argp))))))) = (p);
p = (0x00);

if(!(CLI_MORPH^(flag))) return(0x01);

return(0x01+(cli_load_internal(descriptor,argp)));
}
