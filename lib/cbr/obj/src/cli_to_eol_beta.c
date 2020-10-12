/*

Along with C and Windows libraries

Remarks:
Refer at util/lib/obj/src/cli_ctrl_e_beta.c
*/


# define CBR
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cli_to_eol_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *cur,*b;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

b = (*(CLI_BASE+(R(base,R(roll,R(ty,*argp))))));
*(CLI_LEAD+(R(cur,R(ty,*argp)))) = (b);

r = ct(b);
while(r) {
INC(*(CLI_LEAD+(R(cur,R(ty,*argp)))));
--r;
}

b = (*(CLI_LEAD+(R(cur,R(ty,*argp)))));
if(EQ(b,*(CLI_INDEX+(R(cur,R(ty,*argp)))))) return(0x01);

r = cli_output_beta(0x00/* comeback */,*(CLI_INDEX+(R(cur,R(ty,*argp)))),argp);
if(!r) {
printf("%s \n","<< Error at fn. cli_output_beta()");
return(0x00);
}

while(r) {
INC(*(CLI_INDEX+(R(cur,R(ty,*argp)))));
--r;
}

return(0x01);
}
