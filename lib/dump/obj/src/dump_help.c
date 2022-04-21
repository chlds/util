/* **** Notes

Help.
*/


# define DUMP_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl dump_help(void)) {

printf("\n");
printf("\t%s \n","Usage:");
printf("\t%s \n","dump [-options] <file>");

printf("\n");
printf("\t%s \n","GitHub: github.com/chlds/util/");

return(0x01);
}
