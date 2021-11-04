/* **** Notes

Remove the code of line break and trailing spaces.

Remarks:
Refer at fn. ct_argt.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl rm_brs(signed char(*argp))) {

auto signed r;

if(!argp) return(0x00);

return(rm_trailing_spaces(argp));
}
