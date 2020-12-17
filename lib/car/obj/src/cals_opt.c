/* **** Notes

Opt
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

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

r = cli_init_codepage(codepage);
if(!r) return(0x00);

r = cli_backup_codepages_beta(0x00/* flag */,codepage);
if(!r) return(0x00);

r = cli_set_codepages_beta(ci,co);
if(!r) return(0x00);

r = cli_init_property(&(R(property,*argp)));
if(!r) {
printf("%s \n","<< Error at fn. cli_init_property()");
return(0x00);
}

r = cli_retrieve_standard_handles_beta(R(handle,R(property,*argp)));
if(!r) {
printf("%s \n","<< Error at fn. cli_retrieve_standard_handles_beta()");
return(0x00);
}

r = cals_r(arg,argp);
if(!r) return(0x00);

i = (r);

r = cli_restore_codepages_beta(0x00/* flag */,codepage);
if(!r) return(0x00);

return(i);
}
