/*

Copy to pages.

Along with C library

Remarks:
Refer at fn. cli_paste_beta.
*/


# define CLI_MACRO

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_copy_to_pages_internal(CLI_SPOOL(*argp),signed char(*buff),signed char(*base))) {

/* **** DATA, BSS and STACK */
static signed char CR = ('\r');
static signed char LF = ('\n');

auto CLI_PAGE *page;
auto signed char *p;
auto signed i,l,r;
auto signed short flag;
auto signed char cr;
auto signed char c;

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!buff) return(0x00);
if(!base) return(0x00);

flag = (0x00);
cr = (0x00);
i = (0x00);
while(0x01) {
c = (*base);
base++;
*(buff+(i)) = (c);
if(!c) {
flag++;
break;
}
if(!(LF^(c))) {
*(buff+(i)) = (0x00);
if(cr) *(buff+(--i)) = (0x00);
break;
}
if(!(CR^(c))) cr = (0x01);
else cr = (0x00);
i++;
}

r = cli_bind_pages(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_bind_pages()");
return(0x00);
}

// aux..
if(*(CLI_INDEX+(R(page,*argp)))) page = (*(CLI_INDEX+(R(page,*argp))));
else {
printf("%s\n","No index page at *(CLI_INDEX+(R(page,*argp..");
return(0x00);
}

r = keep(CLI_BASE+(R(base,*page)),buff);
if(!r) {
printf("%s\n","<< Error at fn. keep()");
return(0x00);
}

if(flag) return(0x01);

return(0x01+(cli_copy_to_pages_internal(argp,buff,base)));
}
