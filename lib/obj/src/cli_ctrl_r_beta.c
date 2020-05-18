/*

Press <Ctrl-R> to invoke the function.

Along with C and Windows libraries

Remarks:
Refer at fn. cli_io_beta, fn. cli_ctrl_j_beta and fn. cli_ctrl_b_beta.
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

auto CLI_PAGE *page;
auto signed char *cur,*p;
auto signed long long ll;
auto signed c,i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(CLI_DBG_D<(CLI_DBG)) printf("%s","<Ctrl-R>");

cur = (*(CLI_INDEX+(R(cur,R(ty,*argp)))));
ll = ((signed long long) cur);
if(!(ll^((signed long long) *(CLI_BASE+(R(cur,R(ty,*argp))))))) {
page = (*(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))));
ll = ((signed long long) page);
if(ll^((signed long long) *(CLI_BASE+(R(page,R(spool,R(ty,*argp))))))) {
r = cli_ctrl_u_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_ctrl_u_beta()");
return(0x00);
}
r = cli_to_eol_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_to_eol_beta()");
return(0x00);
}}
return(0x01);
}

r = cue_backward(&p,*(CLI_BASE+(R(base,R(roll,R(ty,*argp))))),cur);
if(!r) {
printf("%s\n","<< Error at fn. cue_backward()");
return(0x00);
}

r = cli_ctrl_a_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_ctrl_a_beta()");
return(0x00);
}

cur = (*(CLI_INDEX+(R(cur,R(ty,*argp)))));

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

*(CLI_INDEX+(R(cur,R(ty,*argp)))) = (cur);

return(0x01);
}
