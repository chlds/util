/* **** Notes

Commandlet to output

Remarks:
Refer at fn. unknit_b, fn. knit_b and stitch_b.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

void(__cdecl cmdl_output_b(sat_t(*argp))) {

auto signed r;

if(!argp) {
printf("%s \n","<< Error at fn. cmdl_output_b()");
unknit_b();
// return;
}

/* Monitor
printf("%s \n","<< cmdl_output_b runs.");
//*/

INC(R(run,*argp));
r = cmdl_output_b_r(argp);
if(!r) printf("%s \n","<< Error at fn. cmdl_output_b_r()");

DEC(R(run,*argp));

unknit();
// return;
}
