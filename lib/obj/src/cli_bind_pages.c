/* **** Notes

Concatenate pages after allocating a memory block for structure CLI_PAGE.

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

signed(__cdecl cli_bind_pages(CLI_SPOOL(*argp))) {

/* **** DATA, BSS and STACK */
auto CLI_PAGE *page;

auto signed char *p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

page = (CLI_PAGE(*)) malloc(0x01*(sizeof(CLI_PAGE)));
if(!page) {
printf("%s\n","<< Error at fn. malloc()");
return(0x00);
}

// e.g., *(CLI_CACHE+(R(page,*argp))) = (page);

*(CLI_BASE+(R(base,*page))) = (0x00);

r = cli_concat_pages(page,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_concat_pages()");
return(0x00);
}

return(0x01);
}
