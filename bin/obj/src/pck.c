/* **** Notes

Pick up sub-directories and their contents in the depth-first search

WARNING:
This program may immediately cause a stack overflow.
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# include "./../../../incl/config.h"

/* **** Global variables */
signed(TheNumbreOfTheDirectories) = (0x00);
signed(TheNumbreOfTheFiles) = (0x00);

/* **** entry point */
signed(__cdecl main(signed(argc), signed char(**argv), signed char(**envp))) {

/* **** DATA, BSS and STACK */
auto WIN32_FIND_DATA(wfd);
auto void(*search);
auto signed char(*p);
auto signed(i), (r);
auto signed char(c);

/* **** CODE/TEXT */
if(argc<(2)) {
p = ("./*");
// printf(p);
}

else {
p = (*(argv+(argc+(~(NIL)))));
}

c = searchdirectory(p);

printf("\n");
printf("%s%d\n", ("The directories: "), (TheNumbreOfTheDirectories));
printf("%s%d\n", ("The files: "), (TheNumbreOfTheFiles));

return(0x00);
}
