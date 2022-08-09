/*

Coordinate and output one character based on UTF-8 to the console screen in UTF-16

Remarks:
Return the number of bytes decoded out of the array
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl cli_out_b(signed short(arg/* align */),signed char(*argp))) {
auto signed r;
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
if(arg<(0x01)) arg = (0x08);
if(0x08<(arg)) arg = (0x08);
if(!(HT^(*argp))) {
r = cli_indent(cli_reckon(arg/* align */));
if(!r) printf("%s \n","<< Error at fn. cli_indent()");
return(r);
}
r = cli_o_b(0x01,argp);
if(!r) printf("%s \n","<< Error at fn. cli_o_b()");
return(r);
}
