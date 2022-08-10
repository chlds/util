/* **** Notes

Convert into UTF-8
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl cv_main(MAIN_T(argf),signed(argc),signed short(**argv),signed short(**envp))) {
auto signed char **v;
auto signed r;
if(!argf) return(0x00);
if(argc<(0x01)) return(0x00);
if(!argv) return(0x00);
// if(!envp) return(0x00);
if(!(EQ(argc,ct_v_w(argv)))) return(0x00);
v = (0x00);
if(envp) {
r = cv_bw_v(&v,envp);
if(!r) {
printf("%s \n","<< Error at fn. cv_bw_v()");
return(0x00);
}}
r = cv_main_r(argf,argc,argv,v);
if(v) rl_v(&v);
return(r);
}
