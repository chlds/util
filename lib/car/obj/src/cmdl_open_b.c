/* **** Notes

Commandlet to open

Remarks:
Refer at fn. unknit_b, fn. knit_b and stitch_b.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

void(__cdecl cmdl_open_b(sat_t(*argp))) {

auto signed r;

if(!argp) {
printf("%s \n","<< Error at fn. cmdl_open_b()");
unknit_b();
// return;
}

/* Monitor
printf("%s \n","<< cmdl_open runs.");
//*/

INC(R(run,*argp));
r = cmdl_open_b_r(argp);
if(!r) printf("%s \n","<< Error at fn. cmdl_open_b_r()");

DEC(R(run,*argp));

unknit();
// return;
}
