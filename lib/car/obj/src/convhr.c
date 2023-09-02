/*

Convert

Remarks:
Return (~0x00) on failure
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl convhr(signed arg)) {
auto signed bit = (0x10);
auto signed hrs = (24);
if(!(arg<(hrs))) return(~0x00);
if(arg<(0x00)) return(~0x00);
SHL(arg,bit);
return(arg);
}
