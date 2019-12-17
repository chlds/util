/* **** Notes

Copy characters on workspace to the current page.

Remarks:
Build a doubly linked list
Along with C library
*/


# define CLI_W32
# define R(D,S) (S).D
// A local macro function

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_book(CLI_TYPEWRITER(*argp))) {

/* **** DATA, BSS and STACK */
auto CLI_PAGE *page;

auto signed char *p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = ct(*(CLI_BASE+(R(base,R(roll,*argp)))));
/* empty or..
if(!r) {
printf("%s\n","<< Error at fn. ct()");
return(0x00);
}
//*/

r++;

// Aux.
r++;

p = (signed char(*)) malloc(r*(sizeof(signed char)));
if(!p) {
printf("%s\n","<< Error at fn. malloc()");
return(0x00);
}

r = cpy(p,*(CLI_BASE+(R(base,R(roll,*argp)))));
/* empty or..
if(!r) {
printf("%s\n","<< Error at fn. cpy()");
return(0x00);
}
//*/

*(CLI_BASE+(R(base,**(CLI_INDEX+(R(page,R(spool,*argp))))))) = (p);
p = (0x00);

return(0x01);
}
