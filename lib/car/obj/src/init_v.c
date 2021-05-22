/* **** Notes

Initialise.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl init_v(signed(arg),void(**argp))) {

if(!argp) return(0x00);
if(!(*argp)) return(0x00);

if(arg) rl(*argp);
*argp = (0x00);
argp++;

return(0x01+(init_v(arg,argp)));
}
