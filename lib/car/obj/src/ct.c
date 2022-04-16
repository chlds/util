/* **** Notes

Count letters to the terminating null character.
*/


# include "./incl/config.h"

signed(__cdecl ct(signed char(*argp))) {
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
argp++;
return(0x01+(ct(argp)));
}
