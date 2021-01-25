/*

Retrieve information about the specified console screen buffer.

Remarks:
Refer at fn. cli_init_property.
*/


# define CAR

# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_get_rect(signed(arg),cli_frame_t(*argp))) {

auto signed i,r;

if(!argp) return(0x00);

// if(!(CLI_INIT&(R(flag,*argp)))) return(0x00);

r = rect_beta(CLI_IN,arg,&(R(rect,*argp)));

return(r);
}
