/*

Press <Ctrl-J> to invoke the function.

Along with C and Windows libraries

Remarks:
Refer at fn. cli_io_beta, fn. cli_ctrl_r_beta and fn. cli_ctrl_b_beta.
*/


# define CBR
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cli_ctrl_j_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *cur,*old,*p;
auto signed long long ll;
auto signed i,r;
auto signed short flag;
auto signed short y;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(CLI_DBG_D<(CLI_DBG)) printf("%s","<Ctrl-J>");

p = (*(CLI_INDEX+(R(cur,R(ty,*argp)))));
ll = ((signed long long) p);
if(!(ll^((signed long long) *(CLI_BASE+(R(base,R(roll,R(ty,*argp)))))))) {
//* aux.
r = cli_ctrl_h_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_ctrl_h_beta()");
return(0x00);
}
//*/
return(0x01);
}

/*
r = cli_book(&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_book()");
return(0x00);
}
//*/

old = (p);

r = ct(p);
if(!r) p = (0x00);
else {
INC(r);
r = (r*(sizeof(*p)));
p = (signed char(*)) malloc(r);
if(!p) {
printf("%s\n","<< Error at fn. malloc()");
return(0x00);
}
r = cpy(p,*(CLI_INDEX+(R(cur,R(ty,*argp)))));
if(!p) {
printf("%s\n","<< Error at fn. cpy()");
return(0x00);
}}

*(CLI_OFFSET+(R(append,R(ty,*argp)))) = (p);

r = cli_ctrl_r_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_ctrl_r_beta()");
return(0x00);
}

if(!p) **(CLI_INDEX+(R(cur,R(ty,*argp)))) = (0x00);
else {
r = cpy(*(CLI_INDEX+(R(cur,R(ty,*argp)))),p);
if(!r) {
printf("%s\n","<< Error at fn. cpy()");
return(0x00);
}}

if(p) free(p);
p = (0x00);
*(CLI_OFFSET+(R(append,R(ty,*argp)))) = (p);

cur = (*(CLI_INDEX+(R(cur,R(ty,*argp)))));
i = (0x00);

while(0x01) {
if(cur<(old)) {
cur++;
i++;
}
else break;
}

ADD(R(gauge,R(ty,*argp)),i);

OR(R(flag,R(ty,*argp)),CLI_REFRESH);

return(0x01);
}
