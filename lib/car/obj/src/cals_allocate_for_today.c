/* **** Notes

Allocate
//*/


# define CALEND
# define CAR
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cals_allocate_for_today(cals_t(*argp))) {

/* **** DATA, BSS and STACK */
auto cals_event_t *event;
auto signed char *b;
auto signed i,r;

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = (-16+(5+(COL_R)));
if(r<(0x00)) return(0x00);
r++;
r = (r*(sizeof(*b)));
i = (r);
b = (signed char(*)) malloc(r);
if(!b) return(0x00);

*(--r+(b)) = (0x00);
while(r) *(--r+(b)) = ('-');

R(b,R(today,*argp)) = (b);
b = (0x00);

return(i);
}
