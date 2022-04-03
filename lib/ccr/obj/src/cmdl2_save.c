/* **** Notes

Commandlet to save except the commandlets

Attention:
This code
is for a doubly LL i.e.,
<NOT> for a circular LL..

Remarks:
Implemented along with fn. cv_v() and with fn. rl_v()
*/


# define CCR
# include <stdio.h>
# include "../../../incl/config.h"

unsigned(__stdcall cmdl2_save(SAT(*argp))) {

auto signed r;

if(!argp) printf("%s \n","<< Error at cmdl2_save()");

INC(R(Running,*argp));
r = cmdl2_save_r(argp);
if(!r) printf("%s \n","<< Error at cmdl2_save_r()");

DEC(R(Running,*argp));

return(r);
}
