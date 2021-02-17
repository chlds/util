/* **** Notes

Release

Remarks:
Along with C library
*/


# define CAR
# include <stdlib.h>
# include "./../../../incl/config.h"

signed(__cdecl rl(void(*argp))) {

if(!argp) return(0x00);

free(argp);
argp = (0x00);

return(0x01);
}
