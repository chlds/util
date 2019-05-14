/* **** Notes

Look up sub-directories and their contents in the depth-first search

Remarks:
This program may immediately cause a stack overflow.
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# include "./../../../incl/config.h"

# define OPT_RECURSION (0x02)
# define OPT_ATTRIBS (0x01)
// for signed short(cmdln_flag).

//* To measure a part of code that overflows a stack frame
struct dir_info_stored {
void(*search);
char signed(*p_dir);
WIN32_FIND_DATA(wfd);
} typedef DIR_INFO_STORED;
//*/

/* **** Global variables */
signed(TheNumbreOfDirectories) = (0x00);
signed(TheNumbreOfFiles) = (0x00);

/* **** entry point */
signed(__cdecl main(signed(argc), signed char(**argv), signed char(**envp))) {

/* **** DATA, BSS and STACK */
auto DIR_INFO_STORED(dis);
/* as a substitute/alternative for
auto void(*search);
auto signed char(*p_dir);
auto WIN32_FIND_DATA(wfd);
//*/

auto signed char(*p);
auto signed(r);
auto signed short(cmdln_flag);

/* **** CODE/TEXT */
if(argc<(2)) p = ("./*");
else p = (*(argv+(argc+(~(NIL)))));
// printf(p);

XOR(cmdln_flag, cmdln_flag);
OR(cmdln_flag, OPT_ATTRIBS);

if(2<(argc)) {
XOR(cmdln_flag, cmdln_flag);
OR(cmdln_flag, (OPT_ATTRIBS|(OPT_RECURSION)));
}

r = finds(cmdln_flag, p);

if(!r) {
printf("%s\n", "<< An error has occurred at fn. finds().");
return(0x00);
}

printf("\n");
printf(" %d%s\n", TheNumbreOfDirectories, " directories");
printf(" %d%s\n", TheNumbreOfFiles, " files");

return(0x00);
}
