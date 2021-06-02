/* **** Notes

Concatenate events after allocating a memory block for structure cals_t.

Remarks:
Build a doubly linked list
*/


# define CALEND
# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cals_bind_events(cals_roll_t(*argp))) {

auto cals_event_t *ev;
auto signed char *b;

auto signed i,r;
auto signed short flag;

if(!argp) return(0x00);

ev = (cals_event_t(*)) alloc(0x01*(sizeof(*ev)));
if(!ev) return(0x00);

r = cals_init_event(ev);
if(!r) {
printf("%s\n","<< Error at fn. cals_init_event()");
return(0x00);
}

r = cals_concat_events(ev,argp);
if(!r) {
printf("%s\n","<< Error at fn. cals_concat_events()");
return(0x00);
}

OR(R(flag,*argp),CALS_BOUND);

return(0x01);
}
