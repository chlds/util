/* **** Notes

Commandlet to output the local time

Remarks:
Transparency
Design and Implementation e.g.,
double buffering(, off-screen or sprite),
alpha blending,
directly access using a vector table of the offset pointers,
dynamically secure an array of the offset pointers e.g., p = (char signed(**)) malloc(N*(sizeof(char signed(*))));,
label cpu_idle, cpu_freq and more for an extensible code..
*/

# define CALEND
# define CCR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cmdl2_time_r(SAT(*argp))) {

auto signed char *b;
auto signed r;
auto signed short flag;

if(!argp) return(0x00);

if(!(R(toggle,*argp))) INC(R(toggle,*argp));
else {
AND(R(toggle,*argp),0x00);
return(0x01);
}

r = cmdl2_time_rr(argp);
if(!r) printf("%s \n","<< Error at fn. cmdl2_time_rr()");

AND(R(toggle,*argp),0x00);

return(r);
}
