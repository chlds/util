/*

Close an open object handle.

Remarks:
Refer at fn. map_ps_token.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl unmap_ps_token(void(*argp))) {

auto signed r;

if(!argp) return(0x00);

return(unmap_obj(argp));
}