/* **** Notes

Initialise
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl init_a_d(signed(arg),signed(*argp))) {
auto signed r;
if(arg<(0x01)) return(0x00);
if(!argp) return(0x00);
AND(r,0x00);
*argp = (r);
argp++;
--arg;
return(0x01+(init_a_d(arg,argp)));
}
