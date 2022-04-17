/* **** Notes

Commandlet to time

Remarks:
Refer at fn. unknit_b, fn. knit_b and stitch_b.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

void(__cdecl cmdl_time_b(sat_t(*argp))) {

auto signed r;

if(!argp) {
printf("%s \n","<< Error at fn. cmdl_time_b()");
unknit_b();
// return;
}

/* Monitor
printf("%s \n","<< cmdl_time_b runs.");
//*/

INC(R(run,*argp));
// r = cmdl_time_b_r(argp);
// if(!r) printf("%s \n","<< Error at fn. cmdl_time_b_r()");

DEC(R(run,*argp));

unknit();
// return;
}
