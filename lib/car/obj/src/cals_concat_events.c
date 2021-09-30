/* **** Notes

Concatenate the lead, index, offset and base events in a doubly linked list (for general purpose).

Remarks:
Refer at fn. cals_init, fn. cals_bind_events, fn. cals_unmap_events and fn. cals_unbind_events.
Based on a doubly linked list (i.e., not a circular linked list)
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_concat_events(cals_event_t(*cache),cals_roll_t(*argp))) {

auto cals_event_t *ev;
auto signed short insert;

if(!cache) return(0x00);
if(!argp) return(0x00);

AND(insert,0x00);
ev = (*(CLI_LEAD+(R(event,*argp))));
if(!(EQ(ev,*(CLI_INDEX+(R(event,*argp)))))) OR(insert,0x01);

if(!insert) {
if(!(*(CLI_LEAD+(R(event,*argp))))) *(CLI_BASE+(R(event,*argp))) = (cache);
else *(CLI_DI+(R(event,**(CLI_LEAD+(R(event,*argp)))))) = (cache);
*(CLI_SI+(R(event,*cache))) = (*(CLI_LEAD+(R(event,*argp))));
*(CLI_LEAD+(R(event,*argp))) = (cache);
*(CLI_DI+(R(event,**(CLI_LEAD+(R(event,*argp)))))) = (0x00);
// Aux.
*(CLI_OFFSET+(R(event,*argp))) = (*(CLI_BASE+(R(event,*argp))));
*(CLI_INDEX+(R(event,*argp))) = (*(CLI_LEAD+(R(event,*argp))));
}

else {
*(CLI_SI+(R(event,**(CLI_DI+(R(event,**(CLI_INDEX+(R(event,*argp))))))))) = (cache);
*(CLI_DI+(R(event,*cache))) = (*(CLI_DI+(R(event,**(CLI_INDEX+(R(event,*argp)))))));
*(CLI_SI+(R(event,*cache))) = (*(CLI_INDEX+(R(event,*argp))));
*(CLI_DI+(R(event,**(CLI_INDEX+(R(event,*argp)))))) = (cache);
// Aux.
*(CLI_INDEX+(R(event,*argp))) = (cache);
}

return(0x01);
}
