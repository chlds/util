/* **** Notes

Find files that contain the specific string using depth-first search.

Remarks:
The command is case-sensitive.
*/


# define C_CODE_STDS
# include "./../../../incl/config.h"

/* **** Global variables */
signed(TheNumbreOfDirectories) = (0x00);
signed(TheNumbreOfFiles) = (0x00);

/* **** entry point */
signed(__cdecl main(signed(argc), signed char(**argv), signed char(**envp))) {

/* **** DATA, BSS and DATA */
auto signed char(*p);
auto signed(r);
auto signed char(c);

/* **** CODE/TEXT */
if(argc<(2)) {
printf("\n");
printf("%s\n", " pick <path> [FILE]");
printf("\n");
printf("%s\n", " Find files that contain the specific string using depth-first search.");
printf("%s\n", " e.g., pick ./* obj");
return(0x00);
}

if(2<(argc)) {
p = (*(argv+(argc+(~(0x01)))));
r = picking(p, *(argv+(argc+(~(0x00)))));
if(!r) return(XNOR(r));
}

else {
p = (*(argv+(argc+(~(0x00)))));
r = pickfiles(p);
if(!r) return(XNOR(r));
}

printf("\n");
printf(" %d%s\n", TheNumbreOfDirectories, " directories");
printf(" %d%s\n", TheNumbreOfFiles, " files");

return(0x00);
}
