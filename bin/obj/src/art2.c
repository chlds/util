/* **** Notes

Read content out of FILE in column.
*/


# define THRESHOLD (0x03)
# define C_CODE_STDS
# define CAR
# include "./../../../lib/incl/config.h"

signed(__cdecl main(signed(argc),signed char(**argv),signed char(**envp))) {

auto signed char sym[] = {
// SP,
LF,
0x00,
};

auto signed const QUANTUM = (0x10);
auto signed const SNOOZE = (0x08);
auto signed const DELAY = (0x02*(QUANTUM));

auto signed FSIZE = (1024000); // about 1MB
auto signed RADIX = (0x0A);
auto signed LIMIT = (0x02);
auto signed short COLS = (72); // default

auto struct stat stats;
auto signed fd;
auto signed short cols = (COLS);
auto signed short algn = (0x08);
auto signed i,r;
auto signed short flag;

auto signed char *cur,*p,*filename;
auto signed fsize;

if(argc<(LIMIT)) {
printf("\n");
printf("  %s \n","Usage:");
printf("  %s \n","art <file> [columns]");
printf("  %s \n","e.g., art abc.txt 40");
return(0x01);
}

AND(flag,0x00);
if(THRESHOLD<(argc)) OR(flag,OPT_VERBOSE);

cols = (COLS);
filename = (*(0x01+(argv)));
if(LIMIT<(argc)) {
p = (*(argv+(argc+(~0x00))));
r = cv_da(RADIX,&i,p);
// printf("%s%d\n", "r is: ", r);
// printf("%s%d\n", "i is: ", i);
if(!r) return(0x00);
if(!i) i = (COLS);
if(i<(0x00)) i = (0x01+(~i));
cols = (i);
}

/* check the file size to secure buffer */
r = stat(filename,&stats);
if(!(r^(~0x00))) {
printf("%s \n","<< Error at fn. stat()");
return(0x00);
}

// limitation
fsize = (size_t) (stats.st_size);
if(FSIZE<(fsize)) {
printf("%s %d%s","<< Could not load because the file size exceeds",FSIZE,".., ");
printf("%s %ld%s \n","size:",fsize,"bytes");
return(0x00);
}

r = (O_RDONLY|(O_BINARY));
fd = op_b(filename,&r,(void*)0x00);
if(!(fd^(~0x00))) {
printf("%s \n","<< Error at fn. op_b()");
return(0x00);
}

OR(flag,CLI_ERROR);
r = art_r(&flag,cols,/* algn, */sym,fd);
if(CLI_ERROR&(flag)) {
printf("%s \n","<< Error at fn. art_r()");
}

r = cl_b(fd);
if(!(r^(~0x00))) {
printf("%s \n","<< Error at fn. cl_b()");
return(0x00);
}

if(CLI_ERROR&(flag)) {
printf("%s \n","<< Error");
return(0x00);
}

return(0x00);
}
