/* **** Notes

Convert into UTF-8
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl cv_main_r(MAIN_T(argf),signed(argc),signed short(**argv),signed char(**envp))) {
auto signed char **v;
auto signed r;
auto MAIN_T f;
if(!argf) return(0x00);
if(argc<(0x01)) return(0x00);
if(!argv) return(0x00);
// if(!envp) return(0x00);
v = (0x00);
r = cv_bw_v(&v,argv);
if(!r) {
printf("%s \n","<< Error at fn. cv_bw_v()");
return(0x00);
}
f = (argf);
r = f(argc,v,envp);
rl_v(&v);
return(r);
}
