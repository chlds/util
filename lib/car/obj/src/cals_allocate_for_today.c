/* **** Notes

Allocate
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_allocate_for_today(cals_t(*argp))) {

/* **** DATA, BSS and STACK */
auto cals_event_t *event;
auto signed char *b;
auto rect_t rect;
auto signed i,r;

/* **** CODE/TEXT */
if(!argp) return(0x00);

// r = (-16+(5+(COL_R)));
if(!(rect_beta(CLI_IN,CLI_BASE,&rect))) return(0x00);
r = (*(CLI_BASE+(R(right,rect))));
r = (-0x10+(r));
--r;
if(r<(0x00)) return(0x00);
r++;
r = (r*(sizeof(*b)));
i = (r);
b = (signed char(*)) alloc(r);
if(!b) return(0x00);

*(--r+(b)) = (0x00);
while(r) *(--r+(b)) = ('-');

R(b,R(today,*argp)) = (b);
b = (0x00);

return(i);
}
