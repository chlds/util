/* **** Notes

Commandlet to exit

Remarks:
Refer at fn. unknit_b, fn. knit_b and stitch_b.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

void(__cdecl cmdl_exit_b(sat_t(*argp))) {

auto signed r;

if(!argp) {
printf("%s \n","<< Error at fn. cmdl_exit_b()");
unknit_b();
// return;
}

/* monitor
printf("%s \n", "<< cmdl_exit_b runs.");
//*/

OR(*(CLI_BASE+(R(flag,*argp))),CLI_QUIT);
unknit_b();
// return;
}
