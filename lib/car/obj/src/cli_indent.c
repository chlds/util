/*

Output white space characters to the console screen
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl cli_indent(signed short(arg))) {
auto signed r;
if(!(0x00<(arg))) return(0x00);
if(0x08<(arg)) return(0x00);
r = cli_indent_r(arg);
if(!r) return(0x00);
return(0x01);
}
