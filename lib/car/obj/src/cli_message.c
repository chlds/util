/* **** Notes

Output an message

Remarks:
Along with C library
*/


# define STDIO_H
# include "./../../../config.h"

signed(__cdecl cli_message(signed(arg),signed char(*argp))) {
if(!argp) return(0x00);
printf("%s",argp);
return(arg);
}
