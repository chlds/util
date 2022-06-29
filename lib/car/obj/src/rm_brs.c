/* **** Notes

Remove the code of line break and trailing spaces.
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl rm_brs(signed char(*argp))) {
return(rm_trailing_spaces(argp));
}
