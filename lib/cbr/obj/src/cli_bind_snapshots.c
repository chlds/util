/* **** Notes

Concatenate snapshots after allocating a memory block for structure cli_snapshot_t.

Remarks:
Build a doubly linked list
Along with C library
*/


# define CBR

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cli_bind_snapshots(cli_history_t(*argp))) {

/* **** DATA, BSS and STACK */
auto cli_snapshot_t *cache;

auto signed char *p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

cache = (cli_snapshot_t(*)) malloc(0x01*(sizeof(*cache)));
if(!cache) {
printf("%s\n","<< Error at fn. malloc()");
return(0x00);
}

R(b,*cache) = (0x00);

i = (CLI_OBJS);
while(i) {
*(--i+(R(base,*cache))) = (0x00);
}

R(offset,*cache) = (0x00);
R(flag,*cache) = (0x00);

r = cli_concat_snapshots(cache,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_concat_snapshots()");
return(0x00);
}

return(0x01);
}
