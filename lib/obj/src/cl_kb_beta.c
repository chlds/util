/* **** Notes

Set code pages for console input and output.

Along with C and Windows libraries

Remarks:
Based on UTF-8
*/


# define CLI_MACRO
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cl_kb_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto unsigned const UTF_8 = (65001);

auto signed char *p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
// quit
if(!(CLI_QUIT^(R(flag,R(ty,*argp))))) return(0x01);

// initialise
p = (*(CLI_INDEX+(R(base,R(roll,R(ty,*argp))))));
R(cur,R(debug,R(commandline,R(ty,*argp)))) = (p);
*(CLI_BASE+(R(cur,R(commandline,R(ty,*argp))))) = (p);
*(CLI_OFFSET+(R(cur,R(commandline,R(ty,*argp))))) = (p);
*(CLI_INDEX+(R(cur,R(commandline,R(ty,*argp))))) = (p);
*(CLI_LEAD+(R(cur,R(commandline,R(ty,*argp))))) = (p);
R(offset,R(commandline,R(ty,*argp))) = (0x00);
R(linebreak,R(commandline,R(ty,*argp))) = (0x00);
R(append,R(commandline,R(ty,*argp))) = (0x00);
R(flag,R(commandline,R(ty,*argp))) = (0x00);

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

/* recur */
// p = (*(CLI_INDEX+(R(base,R(roll,R(ty,*argp))))));
i = (R(size,R(roll,R(ty,*argp))));
r = cl_io_beta(p,i,argp);
if(!r) {
printf("%s\n","<< Error at fn. cl_io_beta()");
return(0x00);
}

r = cli_restore_codepages_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_restore_codepages_beta()");
return(0x00);
}

return(0x01);
}
