/* **** Notes

Opt
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"
# include <stdio.h>

signed(__cdecl cals_opt(signed(arg),cals_t(*argp))) {

/* **** DATA, BSS and STACK */
auto cli_codepage_t *codepage;
auto signed ci,co;
auto signed i,r;

/* **** CODE/TEXT */
if(!arg) return(0x00);
if(!argp) return(0x00);

if(!(CALS_INIT&(R(flag,*argp)))) return(0x00);

codepage = (&(R(codepage,*argp)));
ci = (0x00/* e.g., CLI_UTF_8 */);
co = (0x00/* e.g., CLI_UTF_8 */);

r = cli_init_codepages(codepage);
if(!r) return(0x00);

r = cli_backup_codepages_beta(0x00/* flag */,codepage);
if(!r) return(0x00);

r = cli_set_codepages_beta(ci,co);
if(!r) return(0x00);

r = cals_allocate_for_today(argp);
if(!r) {
printf("%s \n","<< Error at fn. cals_allocate_for_today()");
return(0x00);
}

r = cals_r(arg,argp);
if(!r) return(0x00);

i = (r);

r = cals_release_for_today(argp);
if(!r) {
printf("%s \n","<< Error at fn. cals_release_for_today()");
// return(0x00);
}

r = cli_restore_codepages_beta(0x00/* flag */,codepage);
if(!r) return(0x00);

return(i);
}
