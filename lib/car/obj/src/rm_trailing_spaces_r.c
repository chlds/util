/* **** Notes

Remove trailing spaces.
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl rm_trailing_spaces_r(signed(arg),signed char(*argp))) {
auto signed r;
auto signed char *b = ("\t\n\r ");
if(!arg) return(0x00);
if(!argp) return(0x00);
r = ord(b,*argp);
if(!(r<(ct(b)))) return(0x00);
*argp = (0x00);
return(0x01+(rm_trailing_spaces_r(--arg,--argp)));
}
