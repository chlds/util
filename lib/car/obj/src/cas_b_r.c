/* **** Notes

Cascade
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cas_b_r(signed char **argp)) {
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
*argp = (*(0x01+(argp)));
argp++;
return(0x01+(cas_b_r(argp)));
}
