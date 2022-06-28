/* **** Notes

Count pointers.
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl ct_p(void(**argp))) {
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
argp++;
return(0x01+(ct_p(argp)));
}
