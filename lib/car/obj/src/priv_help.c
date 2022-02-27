/* **** Notes

Help.
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl priv_help(void)) {

auto signed char *b;
auto signed r;
auto signed short flag;

printf("\n");

printf("\t%s \n","Display the privileges to a process.");
printf("\n");

printf("\t%s \n","Syntax:");
printf("\t%s \n","priv <PID>");
printf("\n");

printf("\t%s \n","Remarks:");
printf("\t%s \n","A process identifier i.e., PID");
printf("\n");

printf("\t%s \n","GitHub: github.com/chlds/util/");

return(0x01);
}
