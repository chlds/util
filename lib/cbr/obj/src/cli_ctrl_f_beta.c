/*

Press <Ctrl-F> to invoke the function.

Along with C and Windows libraries

Remarks:
Refer at util/lib/obj/src/cli_io_beta.c
*/


# define CBR
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cli_ctrl_f_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *b;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(CLI_DBG_D<(CLI_DBG)) printf("%s ","<Ctrl-F>");

b = (*(CLI_BASE+(R(base,R(roll,R(ty,*argp))))));
*(CLI_LEAD+(R(cur,R(ty,*argp)))) = (b);

r = ct(b);
while(r) {
INC(*(CLI_LEAD+(R(cur,R(ty,*argp)))));
--r;
}

b = (*(CLI_LEAD+(R(cur,R(ty,*argp)))));
if(EQ(b,*(CLI_INDEX+(R(cur,R(ty,*argp)))))) {
r = cli_ctrl_n_beta(argp);
if(!r) {
printf("%s \n","<< Error at fn. cli_ctrl_n_beta()");
return(0x00);
}
return(0x01);
}

r = cli_coord_out_beta(R(wrap_words,R(config,R(ty,*argp))),*(CLI_INDEX+(R(cur,R(ty,*argp)))),argp);
if(!r) {
printf("%s \n","<< Error at fn. cli_coord_out_beta()");
return(0x00);
}

while(r) {
INC(*(CLI_INDEX+(R(cur,R(ty,*argp)))));
--r;
}

return(0x01);
}
