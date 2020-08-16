/* **** Notes

Look up sub-directories and their contents in the depth-first search

Remarks:
This program may immediately cause a stack overflow.
*/


# define C_CODE_STDS
# define C_W32API
# define CAR
# include "../../../lib/incl/config.h"

# include "../../../lib/incl/c_dir.h"

/* **** entry point */
signed(__cdecl main(signed(argc),signed char(**argv),signed char(**envp))) {

/* **** DATA, BSS and STACK */
auto C_DIRS_INFO cdi;

auto signed char *argp,*p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(argc<(0x02)) argp = ("./*");
else argp = (*(argv+(argc+(~(0x00)))));
// printf(argp);

r = ct(argp);
if(!r) return(0x00);
else i = (r);

p = (0x00);
if(!('/'^(*(argp+(--r))))) {
i++;
i++;
i = (i*(sizeof(signed char)));
p = (signed char(*)) malloc(i);
if(!p) {
printf("%s \n","<< Error at fn. malloc()");
return(0x00);
}
r = cpy(p,argp);
*(p+(r)) = ('*');
r++;
*(p+(r)) = (0x00);
argp = (p);
}

XOR(flag,flag);
OR(flag,OPT_ATTRIBS);

i = (0x00);
if(0x02<(argc)) {
OR(flag,OPT_RECURSION);
// also
r = cv_da(0x0A,&i,*(argv+(argc+(~0x01))));
if(!r) {
if(p) free(p);
return(0x00);
}
if(i<(0x00)) i = (0x01+(~(i)));
if(i) OR(flag,OPT_DEPTH);
i++;
}

cdi.depth = (i);
cdi.directories = (0x00);
cdi.files = (0x00);
cdi.flag = (flag);
cdi.dis = (0x00);
cdi.path = (argp);

r = finds(&cdi);
if(!r) {
printf("%s \n","<< An error has occurred at fn. finds().");
return(0x00);
}

if(p) {
r = embed(0x00,p);
if(!r) {
printf("%s \n","<< Error at fn. embed()");
// return(0x00);
}
free(p);
p = (0x00);
}

argp = (p);
cdi.path = (p);

// printf("\n");
printf(" %d %s \n",R(directories,cdi),"directories");
printf(" %d %s \n",R(files,cdi),"files");

if(DBG) printf(" %s %d \n","Depth:",R(depth,cdi));

return(0x01);
}
