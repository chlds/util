/* **** Notes

Remove.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl rm_asterisk_r(signed(arg),signed char(*argp))) {

auto signed char a = ('*');

if(!arg) return(0x00);
if(!argp) return(0x00);

--argp;
if(!(a^(*argp))) *argp = (0x00);
else return(0x00);

return(0x01+(rm_asterisk_r(--arg,argp)));
}
