/* **** Notes

Convert into UTF-8.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl cv_main_r(MAIN_T(argf),signed(argc),signed short(**argv),signed char(**envp))) {

auto signed char **v;
auto signed char *b;
auto signed r;
auto MAIN_T f;

if(!argf) return(0x00);
if(argc<(0x01)) return(0x00);
if(!argv) return(0x00);
// if(!envp) return(0x00);

v = (0x00);
r = cv_argv_bw(&v,argv);
if(!r) {
printf("%s \n","<< Error at fn. cv_argv_bw()");
return(0x00);
}

f = (argf);
r = f(argc,v,envp);
rl_v(&v);

return(r);
}
