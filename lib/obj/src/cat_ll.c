/* **** Notes

Output character lines out of the argument

argp: Put the leading address of the <knot> structure at.

Remarks:
Use in fn. cmdln_output
*/


# define C_CODE_STDS
# define C_AS
# include "../../../incl/config.h"

signed(__cdecl cat_ll(KNOT(*argp))) {

/* **** DATA, BSS and STACK */
auto KNOT(*cache);

/* **** CODE/TEXT */
if(!argp) return(0x00);

cache = (argp);
argp = ((*argp).s);

printf("%s\n", (*cache).p);

return(0x01+(cat_ll(argp)));
}
