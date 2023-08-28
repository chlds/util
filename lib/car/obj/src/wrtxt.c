/*

Coordinate and write text to the console screen

Remarks:
Return the number of letters
Refer at fn. ctt
Based on UTF-8
Based on Virtual Terminal
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl wrtxt(signed char(*argp),signed(arg))) {
auto signed r;
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
if(!(0x00<(arg))) return(0x00);
r = wrtt(argp);
if(!r) return(0x00);
r = ct_a(argp);
if(!r) return(0x00);
argp = (r+(argp));
--arg;
return(0x01+(wrtxt(argp,arg)));
}
