/* **** Notes

Output character lines out of the argument

argp: Put the terminating address of the <knot> structure at.

Remarks:
Use in debugging
*/


# define C_CODE_STDS
# define CAR
# include "../../../incl/config.h"

signed(__cdecl output_ll(KNOT(*argp))) {

/* **** DATA, BSS and STACK */
auto KNOT *cache;

/* **** CODE/TEXT */
if(!argp) return(0x00);

cache = (argp);
argp = ((*argp).d);

printf("%s", (*cache).p);
printf("%s", ", ");

return(0x01+(output_ll(argp)));
}
