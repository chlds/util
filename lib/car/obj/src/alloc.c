/* **** Notes

Allocate.
*/


# define CAR_H
# include <stdlib.h>
# include "./../../../config.h"

void*(__cdecl alloc(signed(arg))) {
if(!(0x00<(arg))) return(0x00);
return(malloc(arg));
}
