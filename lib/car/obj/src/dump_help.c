/* **** Notes

Help.
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl dump_help(void)) {

printf("\n");
printf("  %s \n","Usage:");
printf("  %s \n","dump [-options] <file>");

return(0x01);
}
