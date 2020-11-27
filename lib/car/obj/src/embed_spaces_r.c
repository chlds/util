/* **** Notes

Embed
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl embed_spaces_r(signed(arg),signed char(*argp))) {

/* **** DATA, BSS and STACK */
if(!arg) return(0x00);
if(!argp) return(0x00);

if(SP^(*(--argp))) return(0x00);
*argp = (0x00);

return(0x01+(embed_spaces_r(--arg,argp)));
}
