/* **** Notes

Concatenate events after allocating a memory block for structure cals_t.

Remarks:
Build a doubly linked list
Along with C library
*/


# define CALEND
# define CAR

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cals_bind_events(cals_stat_t(*argp))) {

/* **** DATA, BSS and STACK */
auto cals_t *event;

auto signed char *b;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

event = (0x00);
event = (cals_t(*)) malloc(0x01*(sizeof(*event)));
if(!event) return(0x00);

r = cals_init(event);
if(!r) {
printf("%s\n","<< Error at fn. cals_init()");
return(0x00);
}

r = cals_concat_events(event,argp);
if(!r) {
printf("%s\n","<< Error at fn. cals_concat_events()");
return(0x00);
}

return(0x01);
}
