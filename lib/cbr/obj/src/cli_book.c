/* **** Notes

Copy characters on workspace to the current page.

Remarks:
Refer at fn. cli_bind_pages.
Build a doubly linked list
Along with C library
*/


# define CBR
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cli_book(CLI_TYPEWRITER(*argp))) {

/* **** DATA, BSS and STACK */
auto cli_page_t *page;

auto signed char *p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

page = (*(CLI_INDEX+(R(page,R(spool,*argp)))));
if(!page) {
printf("%s\n","<< No index page..");
return(0x00);
}

r = ct(*(CLI_BASE+(R(base,R(roll,*argp)))));
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. ct()");
return(0x00);
//*/
}

r++;
r = (r*(sizeof(*p)));

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

if(*(CLI_BASE+(R(base,*page)))) {
embed(0x00,*(CLI_BASE+(R(base,*page))));
free(*(CLI_BASE+(R(base,*page))));
}

*(CLI_BASE+(R(base,*page))) = (p);
flag = (CLI_PBR|CLI_BR);
if(flag&(R(flag,*argp))) OR(R(flag,*page),CLI_PBR);

p = (*(CLI_BASE+(R(base,R(roll,*argp)))));
r = compare(*(CLI_INDEX+(R(cur,*argp))),p);
R(offset,*page) = (r);

r = cli_diff_history(&flag,*(CLI_BASE+(R(base,R(roll,*argp)))),page);
if(!r) {
printf("%s\n","<< Error at fn. cli_diff_history()");
return(0x00);
}

if(flag) {
r = cli_history(page);
if(!r) {
printf("%s\n","<< Error at fn. cli_history()");
return(0x00);
}}

return(0x01);
}
