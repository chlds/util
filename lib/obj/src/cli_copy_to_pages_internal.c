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

signed(__cdecl cli_copy_to_pages_internal(signed short(lastbreak),CLI_SPOOL(*argp),signed char(*buff),signed char(*base))) {

/* **** DATA, BSS and STACK */
static signed char CR = ('\r');
static signed char LF = ('\n');

auto CLI_SNAPSHOT *snapshot;
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

page = (*(CLI_INDEX+(R(page,*argp))));
if(!page) {
printf("%s\n","No index page at *(CLI_INDEX+(R(page,*argp..");
return(0x00);
}

r = keep(CLI_BASE+(R(base,*page)),buff);
if(!r) {
printf("%s\n","<< Error at fn. keep()");
return(0x00);
}

OR(R(flag,*page),CLI_PBR);
if(flag) {
if(!lastbreak) {
flag = (~CLI_PBR);
AND(R(flag,*page),flag);
// flag = (0x01);
}}

// R(offset,*page) = (ct(*(CLI_BASE+(R(base,*page)))));
R(offset,*page) = (0x00);

r = cli_bind_snapshots(&(R(history,*page)));
if(!r) {
printf("%s\n","<< Error at fn. cli_bind_snapshots()");
return(0x00);
}

snapshot = (*(CLI_INDEX+(R(snapshot,R(history,*page)))));
if(!snapshot) {
printf("%s\n","No index page at *(CLI_INDEX+(R(snapshot,R(history,*page..");
return(0x00);
}

r = (0x00);
r++;
r = (r*(sizeof(signed char)));
p = (signed char(*)) malloc(r);
if(!p) {
printf("%s\n","<< Error at fn. malloc()");
return(0x00);
}
*p = (0x00);
*(CLI_BASE+(R(base,*snapshot))) = (p);
R(offset,*snapshot) = (0x00);

p = (0x00);
snapshot = (0x00);
page = (0x00);

if(flag) return(0x01);

return(0x01+(cli_copy_to_pages_internal(lastbreak,argp,buff,base)));
}
