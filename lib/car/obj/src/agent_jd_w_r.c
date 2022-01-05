/* **** Notes

Jot down.
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl agent_jd_w_r(signed(argc),signed char(*argp),signed char(*envp))) {

auto signed char **v;
auto signed char *b;
auto signed i,r;
auto signed short flag;
auto fl_t fl;

r = init_fl(0x00,&fl);
if(!r) {
printf("%s \n","<< Error at fn. init_fl()");
return(0x00);
}

v = (0x00);
r = cv_argt(&v,argp);
if(!r) {
printf("%s \n","<< Error at fn. cv_argt()");
return(0x00);
}

*(CLI_OFFSET+(R(v,fl))) = (void*) (0x00);
*(CLI_BASE+(R(v,fl))) = (void*) (v);
*(CLI_BASE+(R(fd,fl))) = (argc);

r = cli_opt_b(&fl,agent_jd);
if(!r) printf("%s \n","<< Error at fn. cli_opt_b()");

if(!(rl_v(&v))) {
printf("%s \n","<< Error at fn. rl_v()");
return(0x00);
}

if(!(init_fl(0x00/* not 0x01 */,&fl))) {
printf("%s \n","<< Error at fn. init_fl()");
return(0x00);
}

return(r);
}
