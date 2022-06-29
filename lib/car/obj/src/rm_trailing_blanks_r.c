/* **** Notes

Remove trailing blanks.
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl rm_trailing_blanks_r(signed(arg),signed char(*argp))) {
if(!arg) return(0x00);
if(!argp) return(0x00);
if(SP^(*argp)) return(0x00);
*argp = (0x00);
return(0x01+(rm_trailing_blanks_r(--arg,--argp)));
}
