/* **** Notes

Go for months
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_r(signed(arg),cals_stat_t(*argp))) {

/* **** DATA, BSS and STACK */
auto time_t t;
auto signed i,r;
auto signed short mo;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!arg) return(0x00);

if(arg<(0x00)) arg = (0x01+(~arg));

r = find_a_first_week(*(THEFIRST+(R(day,*argp))),CLI_BASE+(R(t,*argp)),*(CLI_BASE+(R(t,*argp))));
if(!r) return(0x00);

t = (*(CLI_BASE+(R(t,*argp))));
i = (CALS_OBJS);
while(i) *(--i+(R(t,*argp))) = (t);

t = (*(CLI_BASE+(R(wk1,*argp))));
i = (CALS_OBJS);
while(i) *(--i+(R(wk1,*argp))) = (t);

arg++;
mo = (~0x00);
r = cals_rr(mo,arg,argp);

return(r);
}
