/* **** Notes

Concatenate the lead, index, offset and base events in a doubly linked list (for general purpose).

Remarks:
Refer at fn. cals_init, fn. cals_bind_events, fn. cals_unmap_events and fn. cals_unbind_events.
Based on a doubly linked list (i.e., not a circular linked list)
//*/


# define CALEND
# define CAR

# include "../../../incl/config.h"

signed(__cdecl cals_concat_events(cals_t(*cache),cals_stat_t(*argp))) {

/* **** DATA, BSS and STACK */
auto cals_t *event;

/* **** CODE/TEXT */
if(!cache) return(0x00);
if(!argp) return(0x00);

event = (*(CLI_LEAD+(R(event,*argp))));
if(EQ(event,*(CLI_INDEX+(R(event,*argp))))) R(insert,*argp) = (0x00);
else R(insert,*argp) = (0x01);

if(!(R(insert,*argp))) {
if(!(*(CLI_LEAD+(R(event,*argp))))) *(CLI_BASE+(R(event,*argp))) = (cache);
else R(d,**(CLI_LEAD+(R(event,*argp)))) = (cache);
R(s,*cache) = (*(CLI_LEAD+(R(event,*argp))));
*(CLI_LEAD+(R(event,*argp))) = (cache);
R(d,**(CLI_LEAD+(R(event,*argp)))) = (0x00);
// Aux.
*(CLI_OFFSET+(R(event,*argp))) = (*(CLI_BASE+(R(event,*argp))));
*(CLI_INDEX+(R(event,*argp))) = (*(CLI_LEAD+(R(event,*argp))));
}

else {
R(s,*(R(d,**(CLI_INDEX+(R(event,*argp)))))) = (cache);
R(d,*cache) = (R(d,**(CLI_INDEX+(R(event,*argp)))));
R(s,*cache) = (*(CLI_INDEX+(R(event,*argp))));
R(d,**(CLI_INDEX+(R(event,*argp)))) = (cache);
// Aux.
*(CLI_INDEX+(R(event,*argp))) = (cache);
}

return(0x01);
}
