/* **** Notes

Set code pages for console input and output.

Along with C and Windows libraries

Remarks:
Based on UTF-8
*/


# define CLI_W32
# define R(D,S) (S).D
// A local macro function

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_kb_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto unsigned const UTF_8 = (65001);

auto signed char *p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
r = cli_backup_codepages_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_backup_codepages_beta()");
return(0x00);
}

r = cli_set_codepages_beta(UTF_8/* input */,0x00/* output */);
if(!r) {
printf("%s\n","<< Error at fn. cli_set_codepages_beta()");
return(0x00);
}


Sleep(1000);
system("cls");


if(CLI_DBG) cputs("Please type the <Enter> key to stop.\n\n");

/* Recur to build a verse */
p = (*(CLI_BASE+(R(base,R(roll,R(ty,*argp))))));
i = (R(size,R(roll,R(ty,*argp))));
r = cli_io_beta(p,i,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_io_beta()");
return(0x00);
}


Sleep(250);
system("cls");


if(CLI_DBG) {
printf("\n");
printf("Text: ");
r = cli_outs(p);
printf("\n");
if(!r) {
// Caused by empty space or..
}}

r = cli_restore_codepages_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_restore_codepages_beta()");
return(0x00);
}

return(0x01);
}
