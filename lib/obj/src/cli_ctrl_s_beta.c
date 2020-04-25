/*

Press <Ctrl-S> to invoke the function.

Along with C and Windows libraries

Remarks:
Refer at util/lib/obj/src/cli_io_beta.c
*/


# define CLI_MACRO
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_ctrl_s_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto CLI_COORD coord[0x02];

auto signed char *p;
auto signed c,i,r;
auto signed short inte;
auto signed short exte;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(CLI_DBG_D<(CLI_DBG)) printf("%s","<Ctrl-S>");
if(CLI_DBG) return(0x01);

r = cli_emul(CLI_IN,&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_emul()");
return(0x00);
}

r = cli_coord_beta(CLI_IN,coord+(CLI_BASE),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

inte = (R(Bottom,R(srWindow,R(csbi,*argp))));
exte = (R(Top,R(srWindow,R(csbi,*argp))));

r = cli_save_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_save_beta()");
return(0x00);
}

/* fix the frame */
r = cli_get_csbi_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_get_csbi_beta()");
return(0x00);
}
if(exte^(R(Top,R(srWindow,R(csbi,*argp))))) {
R(y,*(coord+(CLI_OFFSET))) = (exte);
R(x,*(coord+(CLI_OFFSET))) = (0x00);
r = cli_coord_beta(CLI_OUT,coord+(CLI_OFFSET),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}}

/* come back */
r = cli_coord_beta(CLI_OUT,coord+(CLI_BASE),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

r = cli_emul(CLI_OUT,&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_emul()");
return(0x00);
}

return(0x01);
}
