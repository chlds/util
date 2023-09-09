/*

Convert

Remarks:
Return (~0x00) on failure
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cvhr_noon(signed char *argp)) {
auto signed char sym[] = ("noon");
if(!argp) return(~0x00);
if(cmpa_b(sym,argp)) return(~0x00);
return(12);
}
