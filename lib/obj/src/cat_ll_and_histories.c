/* **** Notes

Output character lines out of the argument

argp: Put the leading address of the <knot> structure at.

Remarks:
Use in fn. cmdln_output
*/


# define C_CODE_STDS
# define C_AS
# include "../../../incl/config.h"

signed(__cdecl cat_ll_and_histories(KNOT(*argp))) {

/* **** DATA, BSS and STACK */
auto KNOT(*cache);
auto signed(r);

/* **** CODE/TEXT */
if(!argp) return(0x00);

cache = (argp);
argp = ((*argp).s);

r = cat_history((*cache).clih.l);
printf("%s%d%s\n", "Output ", r, " histories for ");

printf("%s\n", (*cache).p);
printf("\n");

return(0x01+(cat_ll_and_histories(argp)));
}
