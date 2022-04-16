/* **** Notes

Count to the terminating null double word.
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl ct_d(signed(*argp))) {
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
argp++;
return(0x01+(ct_d(argp)));
}
