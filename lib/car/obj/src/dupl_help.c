/* **** Notes

Help.
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl dupl_help(void)) {

printf("\n");
printf("\t%s \n","Duplicate to <DI> out of <SI> in the binary format.");

printf("\n");
printf("\t%s \n","Usage:");
printf("\t%s \n","dupl [-options] .. <destination_file> <source_file>");

printf("\n");
printf("\t%s \n","GitHub: github.com/chlds/util/");

return(0x01);
}
