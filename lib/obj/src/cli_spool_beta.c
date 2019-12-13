/* **** Notes

Along with C and Windows libraries

Remarks:
Build a doubly linked list
Based on UTF-8
*/


# define CLI_W32
# define R(D,S) (S).D
// A local macro function

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_spool_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto CLI_SPOOL *spool;

auto signed char *p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

spool = (&(R(spool,R(ty,*argp))));
r = cli_bind_pages(spool);
if(!r) {
printf("%s\n","<< Error at fn. cli_bind_pages()");
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
