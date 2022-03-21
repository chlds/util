/* **** Notes

Help.
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl lit_help(void)) {

auto signed char *b;
auto signed r;

printf("\n");

printf("\t%s \n","Display one line or about one kilobyte of the content in UTF-8.");
printf("\n");

printf("\t%s \n","lit [flag] <file> [offset]");
printf("\n");

printf("\t%s \n","Flags");
printf("\t%s \n","l Display one line or about 1kB of the content");
printf("\t%s \n","k Display about 1kB of the content");
printf("\n");

printf("\t%s \n","Example");
printf("\t%s \n","lit l cba.txt 12");
printf("\t%s \n","lit k cba.txt");
printf("\t%s \n","lit cba.txt 6");
printf("\t%s \n","lit cba.txt");
printf("\n");

printf("\t%s \n","GitHub: github.com/chlds/util/");

return(0x01);
}
