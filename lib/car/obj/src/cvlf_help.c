/* **** Notes

Help.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl cvlf_help(void)) {

auto signed char *b;
auto signed r;

printf("\n");
printf("\t%s \n","Convert the code of line break into LF.");

printf("\n");
printf("\t%s \n","Syntax:");
printf("\t%s \n","cvlf.exe <DIR> <EXTENSION>");
printf("\t%s \n","cvlf.exe <FILE>");

printf("\n");
printf("\t%s \n","Example:");
printf("\t%s \n","cvlf.exe ./ .c");
printf("\t%s \n","cvlf.exe cba.c");

printf("\n");
printf("\t%s \n","Back files up before running this function if you'd like..");

return(0x01);
}
