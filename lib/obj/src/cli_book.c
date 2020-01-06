/* **** Notes

Copy characters on workspace to the current page.

Remarks:
Build a doubly linked list
Along with C library
*/


# define CLI_MACRO
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_book(CLI_TYPEWRITER(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = ct(*(CLI_BASE+(R(base,R(roll,*argp)))));
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. ct()");
return(0x00);
//*/
}

r++;

p = (signed char(*)) malloc(r*(sizeof(signed char)));
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

if(*(CLI_BASE+(R(base,**(CLI_INDEX+(R(page,R(spool,*argp)))))))) free(*(CLI_BASE+(R(base,**(CLI_INDEX+(R(page,R(spool,*argp))))))));

*(CLI_BASE+(R(base,**(CLI_INDEX+(R(page,R(spool,*argp))))))) = (p);
p = (0x00);

return(0x01);
}
