/* **** Notes

Release
*/


# define CAR
# include "./../../../incl/config.h"
# include <stdlib.h>

signed(__cdecl rl(signed char(**argp))) {

auto signed i,r;

if(!argp) return(0x00);
if(!(*argp)) return(0x00);

r = embed(0x00/* flag */,*argp);
free(*argp);
*argp = (0x00);
if(!DBG) r = (0x01);

return(r);
}
