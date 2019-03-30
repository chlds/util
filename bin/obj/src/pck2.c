/* **** Notes

Pick up sub-directories and their contents in the depth-first search



WARNING: This program immediately causes a stack overflow.



*/


# define C_CODE_STDS
# include "./../../../incl/config.h"

# include <windows.h>


//* To measure a part of code to overflow a stack frame
struct dir_info_stored {
void(*search);
WIN32_FIND_DATA(wfd);
char signed(*parent_dir);
} typedef DIR_INFO_STORED;
//*/


/* Global variables */
int signed(TheNumbreOfTheDirectories) = (int signed) (0);
int signed(TheNumbreOfTheFiles) = (int signed) (0);


/* **** **** entry point */
char signed(__cdecl main(char signed(argc), char signed(**argv), char signed(**envp))) {

/* **** **** DATA */
auto char signed(*p);
auto void*search;
WIN32_FIND_DATA(wfd);
auto int(i), (r);
auto char signed(c);

/* **** **** CODE/TEXT */
if(argc<(2)) {
p = ("./*");
// printf(p);
}

else {
p = (*(argv+(argc+(~(NIL)))));
}

c = searchdirectory2(p);

/* **** **** Reports */
printf("\n");
printf("%s%d\n", ("The total directories: "), (TheNumbreOfTheDirectories));
printf("%s%d\n", ("The total files: "), (TheNumbreOfTheFiles));

return(char signed) (XOR(c, c));
}
