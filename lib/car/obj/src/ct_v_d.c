/* **** Notes

Count
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl ct_v_d(signed(**argp))) {
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
argp++;
return(0x01+(ct_v_d(argp)));
}
