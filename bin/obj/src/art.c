/* **** Notes

Read content out of FILE in column.
*/


# define LDBUFF (2048)
# define THRESHOLD (0x03)

# define C_CODE_STDS
# define C_AS
# define CAR
# include "./../../../lib/incl/config.h"

signed(__cdecl main(signed(argc),signed char(**argv),signed char(**envp))) {

auto signed const QUANTUM = (0x10);
auto signed const SNOOZE = (0x08);
auto signed const DELAY = (0x02*(QUANTUM));

auto signed FSIZE = (1024000); // about 1MB
auto signed RADIX = (0x0A);
auto signed LIMIT = (0x02);
auto signed short COLS = (0x28); // default
auto signed short cols = (COLS);
auto signed short algn = (0x08);

auto signed char ldbuff[0x01+(LDBUFF)];
auto signed fd[CLI_CACHE] = {
(signed) (0x00)
};

auto signed char *cur,*p,*filename;
auto struct stat stats;
auto signed short verbose;
auto signed i,l,r;
auto signed fsize;

if(argc<(LIMIT)) {
printf("\n");
printf("  %s\n","Usage:");
printf("  %s\n","art <file> [columns]");
printf("  %s\n","e.g., art abc.txt 40");
return(0x00);
}

verbose = (0x00);
if(THRESHOLD<(argc)) verbose = (0x01);

l = (0x00);
if(argc<(0x01+(LIMIT))) {
cols = (COLS);
filename = (*(argv+(argc+(~l))));
}
else {
p = (*(argv+(argc+(~l))));
r = cv_da(RADIX,&i,p);
// printf("%s %d \n","r is:",r);
// printf("%s %d \n","i is:",i);
if(!r) return(0x00);
if(!i) i = (COLS);
if(i<(0x00)) i = (0x01+(~i));
cols = (i);
l++;
filename = (*(argv+(argc+(~l))));
}

/* check the file size to secure buffer */
r = stat(filename,&stats);
if(!(r^(~0x00))) {
printf("%s \n","<< Error at fn. stat()");
return(0x00);
}

// limitation
if(FSIZE<(stats.st_size)) {
printf("%s %d%s","<< Could not load because the file size exceeds",FSIZE,".., ");
printf("%s %ld%s \n","size:",stats.st_size,"bytes");
return(0x00);
}

else fsize = (size_t) (stats.st_size);

/* secure buffer */
r = (fsize);
r++;
r = (r*(sizeof(*p)));
p = (signed char(*)) alloc(r);
if(!p) {
printf("%s \n","<< Error at fn. alloc()");
return(0x00);
}

r = (O_RDONLY|(O_BINARY));
r = op_b(filename,&r,(void*)0x00);
*(CLI_SI+(fd)) = (r);
if(!(r^(~0x00))) {
printf("%s \n","<< Error at fn. op_b()");
return(r);
}
// else printf("%s %Xh \n","File descriptor to read the file is:",r);

/* map on the RAM */
XOR(l,l);
XOR(i,i);
cur = (p);

while(1) {
r = rd_b(*(CLI_SI+(fd)),ldbuff,LDBUFF);
// an error has occurred at fn. read.
if(!(r^(~0x00))) {
printf("%s \n","<< Error at fn. rd_b()");
break;
}
// successfully terminate
if(!r) {
*cur = (0x00);
break;
}
if(!(r^(EOF))) {
*cur = (0x00);
break;
}
r = ncpy(r,cur,ldbuff);
if(!r) break;
ADD(cur,r);
ADD(i,r);
if(verbose) printf("\r%s %d%s%d ","Mapping:",i,"/",stats.st_size);
// CPU Idling
if(l<(SNOOZE)) l++;
else {
XOR(l,l);
sleep_b(QUANTUM);
}}

if(verbose) {
printf("\n");
printf("\n");
}

/* output content of the file in column */
r = column(cols,algn,p);
if(!r) printf("%s \n","<< Error at fn. column()");

if(verbose) {
printf("\n");
printf("%s %d \n","Bytes:",i);
}

embed(0x00,p);
rl(p);

r = cl_b(*(CLI_SI+(fd)));
if(!(r^(~0x00))) {
printf("%s \n","<< Error at fn. cl_b()");
return(r);
}

return(0x00);
}
