/* **** Notes

Look up sub-directories and their contents in the depth-first search

Remarks:
This program may immediately cause a stack overflow.
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# include "./../../../incl/config.h"

//* To measure a part of code that overflows a stack frame
struct dir_info_stored {
void(*search);
WIN32_FIND_DATA(wfd);
char signed(*parent_dir);
} typedef DIR_INFO_STORED;
//*/

/* **** Global variables */
signed(TheNumbreOfTheDirectories) = (0x00);
signed(TheNumbreOfTheFiles) = (0x00);

/* **** entry point */
signed(__cdecl main(signed(argc), signed char(**argv), signed char(**envp))) {

/* **** DATA, BSS and STACK */
auto WIN32_FIND_DATA(wfd);
auto void(*search);
auto signed char(*p);
auto signed(r);

/* **** CODE/TEXT */
if(argc<(2)) {
p = ("./*");
// printf(p);
}

else {
p = (*(argv+(argc+(~(NIL)))));
}

r = open2dir(p);

printf("\n");
printf("%s%d\n", ("The directories: "), (TheNumbreOfTheDirectories));
printf("%s%d\n", ("The files: "), (TheNumbreOfTheFiles));

return(0x00);
}
