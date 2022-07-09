/* **** Notes

Count digits
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl ct_digits(signed char(*argp))) {
auto signed char *fig = ("0123456789");
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
return(ct_digits_r(fig,argp));
}
