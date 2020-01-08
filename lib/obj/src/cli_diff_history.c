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

signed(__cdecl cli_diff_history(signed short(*diff),signed char(*base),CLI_PAGE(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!diff) return(0x00);
if(!base) return(0x00);
if(!argp) return(0x00);

if(!(*(CLI_INDEX+(R(snapshot,R(history,*argp)))))) {
*diff = (0x01);
return(0x01);
}

r = cmpr(&i,base,*(CLI_BASE+(R(base,**(CLI_INDEX+(R(snapshot,R(history,*argp))))))));
if(!r) {
printf("%s\n","<< Error at fn. cmpr()");
return(0x00);
}

if(!i) *diff = (0x00);
else *diff = (0x01);

return(0x01);
}
