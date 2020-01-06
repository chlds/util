/* **** Notes

Take snapshots to redo and undo.

Along with C library

Remarks:
Refer at fn. cli_spool_beta and fn. cli_kb_beta.
Build a doubly linked list
Based on UTF-8
*/


# define CLI_MACRO
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_history(CLI_TYPEWRITER(*argp))) {

/* **** DATA, BSS and STACK */
auto CLI_HISTORY *history;

auto signed char *p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

history = (&(R(history,**(CLI_INDEX+(R(page,R(spool,*argp)))))));

r = cli_bind_snapshots(history);
if(!r) {
printf("%s\n","<< Error at fn. cli_bind_snapshots()");
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
r = (r*(sizeof(signed char)));

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

*(CLI_BASE+(R(base,**(CLI_INDEX+(R(snapshot,*history)))))) = (p);

p = (*(CLI_BASE+(R(base,R(roll,*argp)))));
i = (0x00);

while(0x01) {
if(p<(*(CLI_INDEX+(R(cur,*argp))))) i++;
else break;
p++;
}

R(offset,**(CLI_INDEX+(R(snapshot,*history)))) = (i);

return(0x01);
}
