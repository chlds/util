/* **** Notes

Opt
//*/


# define CALEND
# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cals_opt(signed(arg),cals_t(*argp))) {

auto cli_codepage_t *codepage;
auto signed ci,co;
auto signed i,r;
auto signed short flag;

if(!arg) return(0x00);
if(!argp) return(0x00);

if(!(CALS_INIT&(R(flag,*argp)))) return(0x00);

codepage = (&(R(codepage,*argp)));
ci = (0x00/* e.g., CLI_UTF_8 */);
co = (0x00/* e.g., CLI_UTF_8 */);

if(!(cli_init_codepages(codepage))) return(0x00);

if(!(cli_backup_codepages_beta(0x00/* flag */,codepage))) return(0x00);

r = cli_set_codepages_beta(ci,co);
if(!r) printf("%s \n","<< Error at fn. cli_set_codepages_beta()");

if(r) {
r = cals_opt_r(arg,argp);
if(!r) printf("%s \n","<< Error at fn. cals_opt_r()");
}

if(!(cli_restore_codepages_beta(0x00/* flag */,codepage))) return(0x00);

return(r);
}
