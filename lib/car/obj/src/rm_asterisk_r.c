/* **** Notes

Remove.
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl rm_asterisk_r(signed(arg),signed char(*argp))) {
auto signed char a = ('*');
if(!arg) return(0x00);
if(!argp) return(0x00);
if(a^(*argp)) return(0x00);
*argp = (0x00);
return(0x01+(rm_asterisk_r(--arg,--argp)));
}
