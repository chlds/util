/* **** Notes

Take snapshots to redo and undo.

Along with C library

Remarks:
Call fn. cli_book before invoking the function to take the content out of workspace.
Refer at fn. cli_spool_beta, fn. cli_kb_beta and fn. cli_book.
Build a doubly linked list
Based on UTF-8
*/


# define CLI_MACRO
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_history(CLI_PAGE(*argp))) {

/* **** DATA, BSS and STACK */
auto CLI_HISTORY *history;

auto signed char *p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

history = (&(R(history,*argp)));

r = cli_bind_snapshots(history);
if(!r) {
printf("%s\n","<< Error at fn. cli_bind_snapshots()");
return(0x00);
}

r = ct(*(CLI_BASE+(R(base,*argp))));
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. ct()");
return(0x00);
//*/
}

r++;
r = (r*(sizeof(signed char)));

p = (signed char(*)) malloc(r);
if(!p) {
printf("%s\n","<< Error at fn. malloc()");
return(0x00);
}

r = cpy(p,*(CLI_BASE+(R(base,*argp))));
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cpy()");
return(0x00);
//*/
}

*(CLI_BASE+(R(base,**(CLI_INDEX+(R(snapshot,*history)))))) = (p);

R(offset,**(CLI_INDEX+(R(snapshot,*history)))) = (R(offset,*argp));

return(0x01);
}
