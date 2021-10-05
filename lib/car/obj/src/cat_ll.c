/* **** Notes

Output character lines out of the argument

k: Put the terminating address of the <knot> structure at.

Remarks:
Use in fn. cmdln_output
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cat_ll(KNOT(*k))) {

if(!k) return(0x00);

printf("%s \n",(*k).p);
k = ((*k).d);

return(0x01+(cat_ll(k)));
}
