/* **** Notes

Output character lines out of the argument

argp: Put the terminating address of the <SNAPSHOT> structure at.

Remarks:
Use in fn. cat_ll_and_histories, fn. cmdln_output_history or..
*/


# define C_CODE_STDS
# define C_AS
# include "../../../incl/config.h"

signed(__cdecl cat_history(SNAPSHOT(*argp))) {

/* **** CODE/TEXT */
if(!argp) return(0x00);

printf("%s%s", "  ", (*argp).p);

argp = ((*argp).d);

return(0x01+(cat_history(argp)));
}
