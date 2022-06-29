/* **** Notes

Embed.
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl embedback_r(signed(arg),signed char(*argp))) {
if(arg<(0x01)) return(0x00);
if(!argp) return(0x00);
*argp = ('\0');
return(0x01+(embedback_r(--arg,--argp)));
}
