/*

Convert

Remarks:
Call fn. relw later
Based on UTF-8
*/


# define CAR_H
# include "./../../../config.h"

signed char **(__cdecl convv_xe(signed char(**sym),signed char(*argp))) {
auto signed char **w;
w = convv(sym,argp);
embed(0x00,argp);
rl(argp);
argp = (0x00);
return(w);
}
