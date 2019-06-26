/* **** Notes

Output character lines out of the argument

argp: Put the leading address of the <SNAPSHOT> structure at.

Remarks:
Use in fn. cmdln_output_history
*/


# define C_CODE_STDS
# define C_AS
# include "../../../incl/config.h"

signed(__cdecl cat_history(SNAPSHOT(*argp))) {

/* **** DATA, BSS and STACK */
auto SNAPSHOT(*cache);

/* **** CODE/TEXT */
if(!argp) return(0x00);

cache = (argp);
argp = ((*argp).s);

printf("%s%s", "  ", (*cache).p);

return(0x01+(cat_history(argp)));
}
