/* **** Notes

Count to the terminating null byte.
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl ct_b(signed char(*argp))) {
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
argp++;
return(0x01+(ct_b(argp)));
}
