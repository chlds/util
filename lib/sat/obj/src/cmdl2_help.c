/* **** Notes

Commandlet to help
*/


# define SAT_H
# define STDIO_H
# include "./../../../config.h"

unsigned(__stdcall cmdl2_help(SAT(*argp))) {

auto signed r;

if(!argp) printf("%s \n","<< Error at cmdl2_help()");

INC(R(run,*argp));
r = cmdl2_help_r(argp);
if(!r) printf("%s \n","<< Error at cmdl2_help_r()");

DEC(R(run,*argp));

return(r);
}
