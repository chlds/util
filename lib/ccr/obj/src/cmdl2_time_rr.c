/* **** Notes

Commandlet to output the local time

Remarks:
Transparency
*/

# define CCR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cmdl2_time_rr(SAT(*argp))) {

auto signed char *b;
auto signed r;

if(!argp) return(0x00);

// thread priorities
r = td_priority(0x01);
if(!r) {
printf("%s \n","<< Error at fn. td_priority()");
return(0x00);
}

r = cmdl2_time_rrr(argp);
if(!r) printf("%s \n","<< Error at fn. cmdl2_time_rrr()");

if(!(td_priority(~0x00))) {
printf("%s \n","<< Error at fn. td_priority()");
return(0x00);
}

return(r);
}
