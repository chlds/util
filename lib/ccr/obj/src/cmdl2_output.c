/* **** Notes

Commandlet to output

Attention:
This code
is for a doubly LL i.e.,
<NOT> for a circular LL..
*/


# define CCR
# include <stdio.h>
# include "../../../incl/config.h"

unsigned(__stdcall cmdl2_output(SAT(*argp))) {

auto signed r;

if(!argp) printf("%s \n","<< Error at cmdl2_output()");

INC(R(run,*argp));
r = cmdl2_output_r(argp);
if(!r) printf("%s \n","<< Error at cmdl2_output_r()");

DEC(R(run,*argp));

return(r);
}
