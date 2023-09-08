/*

Convert

Remarks:
Return (0x00) on failure
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl convyr(signed arg)) {
auto signed bit = (0x10);
auto signed lim = (3000);
auto signed epoch = (1900);
if(arg<(epoch)) return(0x00);
if(!(arg<(lim))) return(0x00);
SHL(arg,bit);
return(arg);
}
