/*

Convert

Remarks:
Return (0x00) on failure
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl convmo(signed arg)) {
auto signed bit = (0x08);
auto signed mon = (12);
if(!(0x00<(arg))) return(0x00);
if(mon<(arg)) return(0x00);
SHL(arg,bit);
return(arg);
}
