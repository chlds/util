/* **** Notes

Count letters to the terminating null character.
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl ct_w(signed short(*argp))) {
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
argp++;
return(0x01+(ct_w(argp)));
}
