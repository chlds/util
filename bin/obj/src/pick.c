/* **** Notes

Find files that contain the specific string using depth-first search.

Remarks:
The command is case-sensitive.
*/


# define C_CODE_STDS
# include "./../../../incl/config.h"

/* **** Global variables */
signed TheNumbreOfDirectories = (0x00);
signed TheNumbreOfFiles = (0x00);

/* **** entry point */
signed(__cdecl main(signed(argc),signed char(**argv),signed char(**envp))) {

/* **** DATA, BSS and DATA */
auto signed char *argp,*path,*p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(argc<(0x02)) {
printf("\n");
printf(" %s\n","pick <path> [FILE]");
printf("\n");
printf(" %s\n","Find files that contain the case-sensitive specific string using depth-first search.");
printf(" %s\n","e.g., pick ./* obj");
return(0x00);
}

i = (argc);
if(0x02<(i)) --i;

argp = (*(argv+(i)));
path = (*(argv+(--i)));

r = ct(path);
if(!r) return(0x00);
else i = (r);

if(!('/'^(*(path+(--r))))) {
flag = (0x01);
i++;
i = (i*(sizeof(signed char)));
p = (signed char(*)) malloc(i);
if(!p) {
printf("%s\n","<< Error at fn. malloc()");
return(0x00);
}
r = cpy(p,path);
*(p+(r)) = ('*');
r++;
*(p+(r)) = (0x00);
path = (p);
}

else {
flag = (0x00);
p = (0x00);
}

r = pickfiles(path,argp);
if(!r) return(XNOR(r));

if(flag) {
r = embed(0x00,p);
if(!r) {
printf("%s\n","<< Error at fn. embed()");
// return(0x00);
}
free(p);
p = (0x00);
}

path = (p);
argp = (p);

printf("\n");
printf(" %d %s\n",TheNumbreOfDirectories,"directories");
printf(" %d %s\n",TheNumbreOfFiles,"files");

return(0x00);
}
