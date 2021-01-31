/* **** Notes

Take snapshots to redo and undo.

Along with C library

Remarks:
Call fn. cli_book before invoking the function to take the content out of workspace.
Refer at fn. cli_spool_beta, fn. cli_kb_beta and fn. cli_book.
Build a doubly linked list
Based on UTF-8
*/


# define CBR
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cli_diff_history(signed short(*diff),signed char(*base),cli_page_t(*argp))) {

/* **** DATA, BSS and STACK */
auto cli_snapshot_t *snapshot;
auto signed char *p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!diff) return(0x00);
if(!base) return(0x00);
if(!argp) return(0x00);

snapshot = (*(CLI_INDEX+(R(snapshot,R(history,*argp)))));
if(!snapshot) {
*diff = (0x01);
return(0x01);
}

r = cmpr(&i,base,*(CLI_BASE+(R(base,*snapshot))));
if(!i) {
// replace cursor position only for the snapshot
R(offset,**(CLI_INDEX+(R(snapshot,R(history,*argp))))) = (R(offset,*argp));
*diff = (0x00);
}
else *diff = (0x01);

snapshot = R(d,*snapshot);
if(snapshot) {
r = cmpr(&i,base,*(CLI_BASE+(R(base,*snapshot))));
if(!i) *diff = (0x00);
}

return(0x01);
}
