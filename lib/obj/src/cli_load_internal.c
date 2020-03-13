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

signed(__cdecl cli_load_internal(signed(count),CLI_TYPEWRITER(*argp))) {

/* **** DATA, BSS and STACK */
static signed char CR = ('\r');
static signed char LF = ('\n');

auto signed char *p;
auto signed i,r;
auto signed short flag;
auto signed char c;

/* **** CODE/TEXT */
if(!argp) return(0x00);

p = (*(CLI_BASE+(R(base,R(roll,*argp)))));
if(!p) {
printf("%s\n","<< Assign buffer at *(CLI_BASE+(R(base,R(roll,*argp..");
return(0x00);
}

i = (*(CLI_BASE+(R(size,R(roll,*argp)))));
if(i<(CLI_EMPTY)) {
printf("%s\n","<< Assign size at *(CLI_BASE+(R(size,R(roll,*argp..");
return(0x00);
}

r = cli_init_workspace(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_init_workspace()");
return(0x00);
}

flag = (0x00);

while(0x01) {
if(i<(CLI_EMPTY)) {
*p = (0x00);
i = (CLI_EMPTY+(*(CLI_BASE+(R(size,R(roll,*argp))))));
r = cli_extend(CLI_BASE,0x00/* cue */,i/* extra */,argp);
if(!r) {
OR(R(flag,*argp),CLI_IRR);
printf("%s\n","<< Error at fn. cli_extend()");
return(0x00);
}
p = (*(CLI_INDEX+(R(cur,*argp))));
}
r = read(R(fd,R(edit,*argp)),&c,sizeof(signed char));
if(!(r^(~(0x00)))) {
OR(R(flag,*argp),CLI_IRR);
printf("%s\n","<< Error at fn. read()");
return(0x00);
}
if(!r) {
flag = (CLI_MORPH);
*p = (0x00);
break;
}
if(flag) {
if(!(LF^(c))) {
*(--p) = (0x00);
count++;
break;
}}
if(!(LF^(c))) {
*p = (0x00);
count++;
break;
}
if(!(CR^(c))) flag = (0x01);
else flag = (0x00);
*p = (c);
p++;
--i;
count++;
}

r = cli_bind_pages(&(R(spool,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_bind_pages()");
return(0x00);
}

r = cli_book(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_book()");
return(0x00);
}

// announcements
printf("\r%d%s%d%s",count,"/",R(size,R(edit,*argp)),"bytes");

if(!(CLI_MORPH^(flag))) return(0x01);

return(0x01+(cli_load_internal(count,argp)));
}
