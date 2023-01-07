/* **** Notes

Agent
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl agent_dupl(signed(argc),signed char(**argv),signed char(**envp))) {
auto signed char **b;
auto signed short **w;
auto signed r;
auto signed short flag;
auto fl_t fl;
auto signed threshold = (0x03);
if(argc<(threshold)) return(dupl_help());
b = (argv+(argc+(~0x01)));
w = (0x00);
r = cv_wb_v(&w,b);
if(!r) {
printf("%s \n","<< Error at fn. cv_wb_v()");
return(0x00);
}
r = wr_ds_w(w);
// if(!r) printf("%s \n","<< Error at fn. wr_ds_w()");
// e.g., created with 0B
if(!(rl_vw(&w))) {
printf("%s \n","<< Error at fn. rl_vw()");
return(0x00);
}
return(0x01);
}
