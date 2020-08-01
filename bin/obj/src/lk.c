/* **** Notes

Look up sub-directories and their contents in the depth-first search

Remarks:
This program may immediately cause a stack overflow.
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# include "./../../../lib/incl/config.h"

# define OPT_RECURSION (0x02)
# define OPT_ATTRIBS (0x01)
// for signed short cmdln_flag.

//* To measure a part of code that overflows a stack frame
struct dir_info_stored {
void *search;
char signed *p_dir;
WIN32_FIND_DATA wfd;
} typedef DIR_INFO_STORED;
//*/

/* **** Global variables */
signed TheNumbreOfDirectories = (0x00);
signed TheNumbreOfFiles = (0x00);

/* **** entry point */
signed(__cdecl main(signed(argc),signed char(**argv),signed char(**envp))) {

/* **** DATA, BSS and STACK */
auto DIR_INFO_STORED dis;

/* as a substitute/alternative for
auto void *search;
auto signed char *p_dir;
auto WIN32_FIND_DATA wfd;
//*/

auto signed char *argp,*p;
auto signed i,r;
auto signed short cmdln_flag;
auto signed short flag;

/* **** CODE/TEXT */
if(argc<(0x02)) argp = ("./*");
else argp = (*(argv+(argc+(~(0x00)))));
// printf(argp);

r = ct(argp);
if(!r) return(0x00);
else i = (r);

if(!('/'^(*(argp+(--r))))) {
flag = (0x01);
i++;
i = (i*(sizeof(signed char)));
p = (signed char(*)) malloc(i);
if(!p) {
printf("%s\n","<< Error at fn. malloc() ");
return(0x00);
}
r = cpy(p,argp);
*(p+(r)) = ('*');
r++;
*(p+(r)) = (0x00);
argp = (p);
}

else {
flag = (0x00);
p = (0x00);
}

XOR(cmdln_flag,cmdln_flag);
OR(cmdln_flag,OPT_ATTRIBS);
if(0x02<(argc)) OR(cmdln_flag,OPT_RECURSION);

r = finds(cmdln_flag,argp);
if(!r) {
printf("%s\n","<< An error has occurred at fn. finds(). ");
return(0x00);
}

if(flag) {
r = embed(0x00,p);
if(!r) {
printf("%s\n","<< Error at fn. embed() ");
// return(0x00);
}
free(p);
p = (0x00);
}

argp = (p);

printf("\n");
printf(" %d %s\n",TheNumbreOfDirectories,"directories ");
printf(" %d %s\n",TheNumbreOfFiles,"files ");

return(0x00);
}
