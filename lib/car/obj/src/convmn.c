/*

Convert

Remarks:
Return (~0x00) on failure
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl convmn(signed arg)) {
auto signed min = (60);
auto signed mask = (0xFFFF);
arg = (mask&(arg));
if(!(arg<(min))) return(~0x00);
if(arg<(0x00)) return(~0x00);
return(arg);
}
