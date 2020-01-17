/*

Press <Ctrl-R> to invoke the function.

Along with C and Windows libraries

Remarks:
Refer at fn. cli_io_beta and fn. cli_ctrl_b_beta.
*/


# define CLI_MACRO
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_ctrl_r_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char HT = ('\t');
auto signed char SP = (' ');
auto signed char *cur,*p;
auto signed long long ll;
auto signed c,i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(CLI_DBG_D<(CLI_DBG)) printf("%s","<Ctrl-R>");

p = (*(CLI_INDEX+(R(cur,R(ty,*argp)))));
ll = ((signed long long) p);
if(!(ll^((signed long long) *(CLI_BASE+(R(base,R(roll,R(ty,*argp)))))))) return(0x01);

r = cli_prev_word(&p,&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_prev_word()");
return(0x00);
}

cur = (*(CLI_BASE+(R(base,R(roll,R(ty,*argp))))));

r = cli_ctrl_a_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_ctrl_a_beta()");
return(0x00);
}

while(0x01) {
if(cur<(p)) {
r = cli_coord_out_beta(cur,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_out_beta()");
return(0x00);
}}
else break;
cur = (cur+(r));
}

*(CLI_LEAD+(R(cur,R(ty,*argp)))) = (cur);
*(CLI_INDEX+(R(cur,R(ty,*argp)))) = (cur);

return(0x01);
}
