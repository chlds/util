/* Notes

Count the number of letters to the terminating null character

Remarks:
Based on UTF-8
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl ctt(signed char *argp)) {
auto signed r;
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
r = ct_a(argp);
if(!r) return(0x00);
argp = (r+(argp));
return(0x01+(ctt(argp)));
}
