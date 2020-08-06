/* **** Notes

Concatenate snapshots after allocating a memory block for structure CLI_SNAPSHOT.

Remarks:
Build a doubly linked list
Along with C library
*/


# define CBR

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cli_bind_snapshots(CLI_HISTORY(*argp))) {

/* **** DATA, BSS and STACK */
auto CLI_SNAPSHOT *cache;

auto signed char *p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

cache = (CLI_SNAPSHOT(*)) malloc(0x01*(sizeof(CLI_SNAPSHOT)));
if(!cache) {
printf("%s\n","<< Error at fn. malloc()");
return(0x00);
}

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
