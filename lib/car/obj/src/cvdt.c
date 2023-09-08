/*

Convert

Remarks:
Return (0x00) on failure
A day of days (1 - 31) is in LSB 8
A month of months (1 - 12) is in LSB 16
A year of years (1900 - 2999) is in MSB 16
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cvdt(signed(arg/* from the nth On */),signed char(*argp))) {
return(cvdt_r(arg,argp));
}
