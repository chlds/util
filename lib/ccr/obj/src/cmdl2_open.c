/* **** Notes

Commandlet to open a file

Attention:
This code
is for a doubly LL i.e.,
<NOT> for a circular LL..

Remarks:
Implemented along with fn. cv_v() and with fn. rl_v().
And also with a flag to be added for code to run as far as possible to the end.
*/


# define CCR
# include <stdio.h>
# include "../../../incl/config.h"

unsigned(__stdcall cmdl2_open(SAT(*argp))) {

auto signed r;

if(!argp) printf("%s \n","<< Error at cmdl2_open()");

INC(R(Running,*argp));
r = cmdl2_open_r(argp);
if(!r) printf("%s \n","<< Error at cmdl2_open_r()");

DEC(R(Running,*argp));

return(r);
}
