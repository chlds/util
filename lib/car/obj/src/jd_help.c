/* **** Notes

Help.
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl jd_help(void)) {

auto signed char *b;
auto signed r;
auto signed short flag;

printf("\n");

printf("\t%s \n","Jot down.");
printf("\n");

printf("\t%s \n","Syntax:");
printf("\t%s \n","jd [FLAG] <FILE> ..");
printf("\n");

printf("\t%s \n","Flag:");
printf("\t%s \n","- No record of date and time");
printf("\n");

printf("\t%s \n","Examples:");
printf("\t%s \n","jd - ./cba.txt Hi there!");
printf("\t%s \n","jd abc.txt Hi there!");
/*
printf("\t%s \n","jd ..");
printf("\n");
printf("\t%s \n","Remarks:");
printf("\t%s \n","The PATH can be omitted by writing \"eq path, PATH\" in path ~/.jd/config.txt, e.g.,");
printf("\t%s \n","eq path, ./log.txt");
//*/
printf("\n");

printf("\t%s \n","GitHub: github.com/chlds/util/");

return(0x01);
}
