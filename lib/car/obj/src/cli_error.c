/* **** Notes

Output an error message.

Remarks:
Along with C library
*/


# define CAR

# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_error(signed(arg),signed char(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *b;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

printf("%s \n",argp);

return(arg);
}
