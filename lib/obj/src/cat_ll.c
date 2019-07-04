/* **** Notes

Output character lines out of the argument

k: Put the terminating address of the <knot> structure at.

Remarks:
Use in fn. cmdln_output
*/


# define C_CODE_STDS
# define C_AS
# include "../../../incl/config.h"

signed(__cdecl cat_ll(KNOT(*k))) {

/* **** CODE/TEXT */
if(!k) return(0x00);

printf("%s\n", (*k).p);

k = ((*k).d);

return(0x01+(cat_ll(k)));
}
