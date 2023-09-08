/*

Convert

Remarks:
Return (0x00) on failure
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl convdi(signed arg)) {
auto signed days = (31);
auto signed mask = (0xFF);
arg = (mask&(arg));
if(!(0x00<(arg))) return(0x00);
if(days<(arg)) return(0x00);
return(arg);
}
