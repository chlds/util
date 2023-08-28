/*

Write text to the console screen

Remarks:
Return the number of letters decoded out of the array
Refer at fn. ctt
Based on UTF-8
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl wrt(signed char(*argp),signed(arg))) {
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
return(wrt_r(argp,arg));
}
