/*

Confirm overwrite.

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

signed(__cdecl cli_confirm_save_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
static signed char *label = ("Already existing.. Cancel(c) or overwrite(o): ");

auto CLI_COORD coord;
auto signed char *p;
auto signed c,i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

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
if(R(file,R(edit,R(ty,*argp)))) free(R(file,R(edit,R(ty,*argp))));
R(file,R(edit,R(ty,*argp))) = (0x00);
r = cli_coord_beta(CLI_OUT,&coord,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}
return(0x01);
}

r = cmpr_partially(&i,*(CLI_INDEX+(R(base,R(roll,R(ty,*argp))))),"o");
if(!r) {
printf("%s\n","<< Error at fn. cmpr_partially()");
return(0x00);
}

if(i) {
if(R(file,R(edit,R(ty,*argp)))) free(R(file,R(edit,R(ty,*argp))));
R(file,R(edit,R(ty,*argp))) = (0x00);
}

else {
OR(R(flag,R(ty,*argp)),CLI_OVERWRITE);
r = cli_save_as(0x01/* update */,&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_save_as()");
return(0x00);
}}

r = cli_coord_beta(CLI_OUT,&coord,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

return(0x01);
}
