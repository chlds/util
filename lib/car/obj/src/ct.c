/* **** Notes

Count letters to the terminating null character.
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl ct(signed char(*argp))) {
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
argp++;
return(0x01+(ct(argp)));
}
