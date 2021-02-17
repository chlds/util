/* **** Notes

Allocate.

Remarks:
Along with C library
//*/


# define CAR
# include <stdlib.h>
# include "../../../incl/config.h"

void*(__cdecl alloc(signed(arg))) {

if(!(0x00<(arg))) return(0x00);

return(malloc(arg));
}
