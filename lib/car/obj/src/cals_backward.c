/* **** Notes

Go backward for months
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_backward(signed(arg),cals_t(*argp))) {

/* **** DATA, BSS and STACK */
auto signed i,r;

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!arg) return(0x00);

if(arg<(0x00)) arg = (0x01+(~arg));

r = find_a_first_week(*(THEFIRST+(R(day,*argp))),CLI_BASE+(R(t,*argp)),*(CLI_BASE+(R(t,*argp))));
if(!r) return(0x00);

r = cals_backward_r(arg,argp);

return(r);
}
