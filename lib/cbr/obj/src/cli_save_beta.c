/*

Save.

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

signed(__cdecl cli_save_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
static signed char *label = ("Save as: ");

auto signed char *p;
auto signed c,i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

/*
r = cli_book(&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_book()");
return(0x00);
}
//*/

if(!(R(file,R(edit,R(ty,*argp))))) {
flag = (0x00);
r = cli_display_footer_beta(0x00/* comeback */,label,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_display_footer_beta()");
return(0x00);
}
if(!(CL_QUIT^(R(flag,R(commandline,R(ty,*argp)))))) {
// R(flag,R(commandline,R(ty,*argp))) = (0x00);
return(0x01);
}
r = ct(*(CLI_INDEX+(R(base,R(roll,R(ty,*argp))))));
R(l,R(edit,R(ty,*argp))) = (r);
r = keep(&(R(file,R(edit,R(ty,*argp)))),*(CLI_INDEX+(R(base,R(roll,R(ty,*argp))))));
if(!r) {
printf("%s\n","<< Error at fn. keep()");
return(0x00);
}}
else flag = (0x01);

r = ct(R(file,R(edit,R(ty,*argp))));
if(!r) {
if(R(file,R(edit,R(ty,*argp)))) free(R(file,R(edit,R(ty,*argp))));
R(file,R(edit,R(ty,*argp))) = (0x00);
}
else {
r = cli_save_as(flag/* update */,&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_save_as()");
if(CLI_IRR&(R(flag,R(commandline,R(ty,*argp))))) {
if(R(file,R(edit,R(ty,*argp)))) free(R(file,R(edit,R(ty,*argp))));
R(file,R(edit,R(ty,*argp))) = (0x00);
flag = (~(CLI_IRR));
AND(R(flag,R(commandline,R(ty,*argp))),flag);
return(0x01);
}
return(0x00);
}
if(!(CLI_OVERWRITE&(R(flag,R(ty,*argp))))) {
if(CLI_ALREADY_EXIST&(R(flag,R(ty,*argp)))) {
r = cli_confirm_save_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_confirm_save_beta()");
return(0x00);
}}}}

return(0x01);
}
