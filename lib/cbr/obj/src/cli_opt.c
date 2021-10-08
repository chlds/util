/* **** Notes

Opt.

Remarks:
Based on UTF-8
*/


# define CBR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_opt(cli_property_t(*argp))) {

auto signed char *b;
auto signed i,r;
auto signed short flag;
auto cli_codepage_t codepage;

if(!argp) return(0x00);

r = cli_backup_codepages_beta(0x00,&codepage);
if(!r) {
printf("%s \n","<< Error at fn. cli_backup_codepages_beta()");
return(0x00);
}

r = cli_set_codepages_beta(CLI_UTF_8/* input */,0x00/* output */);
if(!r) printf("%s \n","<< Error at fn. cli_set_codepages_beta()");

if(r) {
r = cli_kb(argp);
if(!r) printf("%s \n","<< Error at fn. cli_kb()");
}

if(!(cli_restore_codepages_beta(0x00,&codepage))) {
printf("%s \n","<< Error at fn. cli_restore_codepages_beta()");
return(0x00);
}

return(r);
}
