/* **** Notes

Output character lines out of the argument

argp: Put the terminating address of the <knot> structure at.

Remarks:
Use in debugging
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl output_ll(KNOT(*argp))) {

auto KNOT *cache;

if(!argp) return(0x00);

cache = (argp);
argp = ((*argp).d);
printf("%s, ",(*cache).p);

return(0x01+(output_ll(argp)));
}
