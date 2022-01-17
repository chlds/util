/* **** Notes

Jot down.
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl jd_help(void)) {

auto signed char *b;
auto signed r;
auto signed short flag;

printf("\n");
printf("  %s \n","Jot down.");
printf("\n");
printf("  %s \n","Syntax:");
printf("  %s \n","jd [FLAG] <FILE> ..");
printf("\n");
printf("  %s \n","Flag:");
printf("  %s \n","- No record of date and time");
printf("\n");
printf("  %s \n","Examples:");
printf("  %s \n","jd - ./cba.txt Hi there!");
printf("  %s \n","jd abc.txt Hi there!");
/*
printf("  %s \n","jd ..");
printf("\n");
printf("  %s \n","Remarks:");
printf("  %s \n","The PATH can be omitted by writing \"eq path, PATH\" in path ~/.jd/config.txt, e.g.,");
printf("  %s \n","eq path, ./log.txt");
//*/
printf("\n");
printf("  %s \n","GitHub: github.com/chlds/util/");

return(0x01);
}
