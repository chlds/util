/* **** Notes

Release
*/


# define CAR_H
# include <stdlib.h>
# include "./../../../config.h"

signed(__cdecl rl(void(*argp))) {
if(!argp) return(0x00);
free(argp);
argp = (0x00);
return(0x01);
}
