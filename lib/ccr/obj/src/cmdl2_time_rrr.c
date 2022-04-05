/* **** Notes

Commandlet to output the local time

Remarks:
Transparency
*/

# define CCR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cmdl2_time_rrr(SAT(*argp))) {

auto signed char **v;
auto signed char *b;
auto KNOT *cache,*lead,*base;
auto signed period;
auto signed i,r;
auto signed short flag;
auto signed default_period = (10);
auto signed radix = (0x0A);
auto signed limit = (6*(3600)); // for 6h

if(!argp) return(0x00);

cache = (*(CLI_INDEX+(R(knot,R(reel,*argp)))));
if(!cache) return(0x00);

b = (R(p,*cache));
/* Monitoring
if(b) printf("%s \n",b);
//*/

/* Count the arguments */
r = ct_args(b);
if(!r) {
printf("%s \n","<< Error at fn. ct_args()");
return(0x00);
}

/* Set the time */
if(r<(0x02)) period = (default_period);
else {
if(!(cv_da(radix,&r,b))) {
printf("%s \n","<< Error at fn. cv_da()");
return(0x00);
}
// printf("%s %d \n","r:",r);
if(r<(0x00)) r = (0x01+(~r));
period = (r);
period = (period%(limit));
if(!period) period = (default_period);
}

R(period,*argp) = (period);

r = cmdl2_time_brush(argp);
if(!r) printf("%s \n","<< Error at fn. cmdl2_time_brush()");

return(r);
}
