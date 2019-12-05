/* **** Notes

Along with C and Windows libraries

Remarks:
Build a doubly linked list
Based on UTF-8
*/


# define R(D,S) (S).D
// A local macro function

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/cli_w32.h"

signed(__cdecl cli_spool_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *p;
auto signed i,r;
auto signed short flag;

auto CLI_PAGE *page;
auto CLI_SPOOL *spool;

/* **** CODE/TEXT */
if(!argp) return(0x00);

page = (CLI_PAGE(*)) malloc(0x01*(sizeof(CLI_PAGE)));
if(!page) {
printf("%s\n","<< Error at fn. malloc()");
return(0x00);
}

*(CLI_OFFSET+(R(base,*page))) = (0x00);

spool = (&(R(spool,R(paper,R(ty,*argp)))));
r = cli_concat_pages(page,spool);
if(!r) {
printf("%s\n","<< Error at fn. cli_concat_pages()");
return(0x00);
}

r = cli_kb_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_kb_beta()");
return(0x00);
}

// secure a buffer

// copy a verse to the buffer

// return(0x01+(cli_spool_beta(argp)));
return(0x01);
}
