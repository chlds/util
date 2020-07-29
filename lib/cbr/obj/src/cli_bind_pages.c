/* **** Notes

Concatenate pages after allocating a memory block for structure CLI_PAGE.

Remarks:
Build a doubly linked list
Along with C library
*/


# define CLI_MACRO

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_bind_pages(CLI_SPOOL(*argp))) {

/* **** DATA, BSS and STACK */
auto CLI_PAGE *cache;

auto signed char *p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

cache = (CLI_PAGE(*)) malloc(0x01*(sizeof(CLI_PAGE)));
if(!cache) {
printf("%s\n","<< Error at fn. malloc()");
return(0x00);
}

R(redo,R(history,*cache)) = (0x00);
R(undo,R(history,*cache)) = (0x00);
R(insert,R(history,*cache)) = (0x00);

i = (CLI_OBJS);
while(i) {
*(--i+(R(snapshot,R(history,*cache)))) = (0x00);
}

R(offset,*cache) = (0x00);
R(flag,*cache) = (0x00);

i = (CLI_OBJS);
while(i) {
*(--i+(R(base,*cache))) = (0x00);
}

r = cli_concat_pages(cache,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_concat_pages()");
return(0x00);
}

return(0x01);
}
