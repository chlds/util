/*

Coordinate and output characters based on UTF-8 to the console screen in UTF-16

Remarks:
Return the number of bytes output for characters (..or the number of characters)
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl cli_output_b(signed short(arg/* align */),signed char(*argp))) {
auto signed r;
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
if(arg<(0x01)) arg = (0x08);
if(0x08<(arg)) arg = (0x08);
r = cli_out_b(arg,argp);
if(!r) {
printf("%s \n","<< Error at fn. cli_out_b()");
return(0x00);
}
argp = (r+(argp));
// e.g., r = (0x01);
return(r+(cli_output_b(arg,argp)));
}
