/* **** Notes

Help.
*/


# define DEPIN_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl depin_help(void)) {

auto signed char *b;
auto signed r;
auto signed short flag;

printf("\n");
printf("\t%s \n","Output clipboard text.");

printf("\n");
printf("\t%s \n","Syntax:");
printf("\t%s \n","depin a <FILE>");
printf("\t%s \n","depin o <NEW_FILE>");
printf("\t%s \n","depin");

printf("\n");
printf("\t%s \n","Flag:");
printf("\t%s \n","a Append clipboard text to the content of the FILE.");
printf("\t%s \n","o Store clipboard text on the NEW_FILE.");

printf("\n");
printf("\t%s \n","GitHub: github.com/chlds/util/");

return(0x01);
}
