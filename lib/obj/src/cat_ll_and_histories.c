/* **** Notes

Output character lines out of the argument

k: Put the terminating address of the <knot> structure at.

Remarks:
Use in fn. cmdln_output
*/


# define C_CODE_STDS
# define C_AS
# include "../../../incl/config.h"

signed(__cdecl cat_ll_and_histories(KNOT(*k))) {

/* **** DATA, BSS and STACK */
auto signed(r);

/* **** CODE/TEXT */
if(!k) return(0x00);

r = cat_history((*k).clih.b);
printf("%s%d%s", " < output ", r, " snapshot histories taken for ");

printf("%s\n", (*k).p);

k = ((*k).d);
return(0x01+(cat_ll_and_histories(k)));
}
