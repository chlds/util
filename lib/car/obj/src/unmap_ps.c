/*

Close an open object handle.

Remarks:
Refer at fn. map_ps.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl unmap_ps(void(*argp))) {

auto signed r;

if(!argp) return(0x00);

return(unmap_obj(argp));
}
