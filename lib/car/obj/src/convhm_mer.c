/*

Convert

Remarks:
Return (~0x00) on failure
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl convhm_mer(signed(arg),signed char(**argp))) {
if(!(cfmmer(argp))) return(~0x00);
return(convhm_mer_r(arg,argp));
}
