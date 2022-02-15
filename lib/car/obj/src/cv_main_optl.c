/* **** Notes

Optional

Remarks:
Based on UTF-8
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cv_main_optl(MAIN_T(argf),signed(argc),signed short(**argv),signed short(**envp))) {

auto signed char *b;
auto signed r;
auto signed short flag;
auto cli_codepage_t codepage;

if(!argf) return(0x00);
if(argc<(0x01)) return(0x00);
if(!argv) return(0x00);
// if(!envp) return(0x00);

r = cli_backup_codepages_beta(0x00,&codepage);
if(!r) {
printf("%s \n","<< Error at fn. cli_backup_codepages_beta()");
return(0x00);
}

r = cli_set_codepages_beta(CLI_UTF_8/* input */,0x00/* output */);
if(!r) printf("%s \n","<< Error at fn. cli_set_codepages_beta()");

if(r) {
r = cv_main(argf,argc,argv,envp);
if(!r) printf("%s \n","<< Error at fn. cv_main()");
}

if(!(cli_restore_codepages_beta(0x00,&codepage))) {
printf("%s \n","<< Error at fn. cli_restore_codepages_beta()");
return(0x00);
}

return(r);
}
