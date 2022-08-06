/* **** Notes

Count backward
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl ct_a_back(signed char(*argp))) {
if(!argp) return(0x00);
// if(!(*argp)) return(0x00);
return(ct_a_back_r(--argp));
}
