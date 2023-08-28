/*

Reckon

Remarks:
Escape sequences
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl cli_reckon(signed short(arg/* align */))) {
auto signed r;
auto signed short x;
auto coord_t coord;
if(!(0x00<(arg))) arg = (0x08);
if(0x08<(arg)) arg = (0x08);
r = coord_report(OBJS,&coord);
if(!r) return(0x00);
x = (*(CLI_B+(R(x,coord))));
if(!x) return(0x00);
--x;
x = (x%(arg));
x = (arg+(0x01+(~x)));
r = (signed) (x);
return(r);
}
