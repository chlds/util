/* **** Notes

Output character lines out of the argument

argp: Put the leading address of the <knot> structure at.

Remarks:
Use in fn. cmdln_output_history
*/


# define C_CODE_STDS
# define C_AS
# include "../../../incl/config.h"

signed(__cdecl catll(KNOT(*argp))) {

/* **** DATA, BSS and STACK */
auto KNOT(*cache);

/* **** CODE/TEXT */
if(!argp) return(0x00);

cache = (argp);
argp = ((*argp).s);

printf("%s\n", (*cache).p);

//* Optional
printf("%s", "And snapshot meta: ");
printf("%s%4d%s%4d", "(*cache).ss_caret_pos_x/y: ", (*cache).ss_caret_pos_x, "/", (*cache).ss_caret_pos_y);
printf("%s%4d%s%4d", ", .ss_count/.ss_tail: ", (*cache).ss_count, "/", (*cache).ss_tail);
printf("%s%ph\n", " and .ss_p: ", (*cache).ss_p);
//*/

return(0x01+(catll(argp)));
}
