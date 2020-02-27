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
static signed char *label = ("Save as: ");

auto CLI_COORD coord;
auto signed char *p;
auto signed c,i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

// temporarily disable
return(0x01);

if(CLI_DBG_D<(CLI_DBG)) printf("%s","<Ctrl-S>");

r = cli_book(&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_book()");
return(0x00);
}

if(!(R(file,R(edit,R(ty,*argp))))) {
flag = (0x00);
r = cli_coord_beta(CLI_IN,&coord,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}
r = cli_display_footer_beta(0x00/* a comeback flag */,label,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_display_footer_beta()");
return(0x00);
}
if(!(CL_QUIT^(R(flag,R(commandline,R(ty,*argp)))))) {
// R(flag,R(commandline,R(ty,*argp))) = (0x00);
r = cli_coord_beta(CLI_OUT,&coord,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}
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
r = cli_save(flag/* an update flag */,&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_save()");
return(0x00);
}
if(!(CLI_OVERWRITE&(R(flag,R(ty,*argp))))) {
if(CLI_ALREADY_EXIST&(R(flag,R(ty,*argp)))) {
r = cli_confirm_save_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_confirm_save_beta()");
return(0x00);
}}}}

if(!flag) {
r = cli_coord_beta(CLI_OUT,&coord,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}}

return(0x01);
}
