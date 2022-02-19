/* **** Notes

Help.
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl pin_help(void)) {

auto signed char *b;
auto signed r;
auto signed short flag;

printf("\n");
printf("\t%s \n","Pin it to your clipboard.");

printf("\n");
printf("\t%s \n","Syntax:");
printf("\t%s \n","pin ..");

/*
printf("\n");
printf("\t%s \n","Flag:");
printf("\t%s \n","f From FILE");
//*/

printf("\n");
printf("\t%s \n","Examples:");
printf("\t%s \n","pin Hi there!");
// printf("\t%s \n","pin f abc.txt");

printf("\n");
printf("\t%s \n","Remarks:");
printf("\t%s \n","Ampersands on the command line should be enclosed in double quotation marks.");

printf("\n");
printf("\t%s \n","GitHub: github.com/chlds/util/");

return(0x01);
}
