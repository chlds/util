/* **** Notes

Opt.

Along with C library

Remarks:
Based on UTF-8
*/


# define CBR

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cli_opt(cli_property_t(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *b,*p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
r = cli_backup_codepages_beta(0x00,&(R(codepage,R(text,*argp))));
if(!r) {
printf("%s \n","<< Error at fn. cli_backup_codepages_beta()");
return(0x00);
}

r = cli_set_codepages_beta(CLI_UTF_8/* input */,0x00/* output */);
if(!r) {
printf("%s \n","<< Error at fn. cli_set_codepages_beta()");
return(0x00);
}

r = cli_kb(argp);
if(!r) {
printf("%s \n","<< Error at fn. cli_kb()");
return(0x00);
}

r = cli_restore_codepages_beta(0x00,&(R(codepage,R(text,*argp))));
if(!r) {
printf("%s \n","<< Error at fn. cli_restore_codepages_beta()");
return(0x00);
}

return(0x01);
}
