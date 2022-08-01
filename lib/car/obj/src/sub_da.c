/* **** Notes

Subtract
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl sub_da(signed(arg),signed char(*argp))) {
if(!argp) return(0x00);
return(arg+(0x01+(~(ct(argp)))));
}
