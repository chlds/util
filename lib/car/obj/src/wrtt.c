/*

Coordinate and write text based on UTF-8 to the console screen in UTF-16

Remarks:
Refer at fn. cli_reckon and fn. cli_indent
Based on UTF-8
Based on Virtual Terminal
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl wrtt(signed char *argp)) {
return(wrtt_r(argp));
}
