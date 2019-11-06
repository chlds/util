/* **** Notes

Read content out of FILE in column.

Implemented with a flag to be added for code to run as far as possible to the end
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API // To use fn. Sleep in a loop.
# include "./../../../incl/config.h"

# define LDBUFF (2048)
# define THRESHOLD (0x03)

signed(__cdecl main(signed(argc),signed char(**argv),signed char(**envp))) {

/* **** DATA, BSS and STACK */
enum {
SI, DI, CACHE
};

auto signed const QUANTUM = (0x10);
auto signed const SNOOZE = (0x08);
auto signed const DELAY = (0x02*(QUANTUM));

auto signed const FSIZE = (1024000); // about 1MB

auto signed RADIX = (0x0A);
auto signed LIMIT = (0x02);
auto signed short COLS = (0x28); // default

auto struct stat stats;

auto signed fd[2] = {
(signed) (0x00)
};

auto signed char ldbuff[LDBUFF];
auto signed short verbose;

auto signed short cols = (COLS);
auto signed short algn = (0x08);
auto signed i,l,r;

auto signed char *cur,*p,*filename;
auto signed fsize;

auto unsigned char(c);

/* **** CODE/TEXT */
if(argc<(LIMIT)) {
printf("\n");
printf("%s\n", "  Usage:");
printf("%s\n", "  art <file> [columns]");
printf("%s\n", "  e.g., art abc.txt 40");
return(0x00);
}

if(THRESHOLD<(argc)) verbose = (0x01);
else verbose = (0x00);

l = (0x00);

if(argc<(0x01+(LIMIT))) {
cols = (COLS);
filename = (*(argv+(argc+(~(l)))));
}

else {
p = (*(argv+(argc+(~(l)))));
r = cv2d(RADIX,&i,p);
// printf("%s%d\n", "r is: ", r);
// printf("%s%d\n", "i is: ", i);
if(!r) return(0x00);
if(i<(0x00)) i = (0x01+(~(i)));
cols = (i);
l++;
filename = (*(argv+(argc+(~(l)))));
}

/* Check the file size to secure buffer */
r = stat(filename,&stats);

if(!(r^(~(NIL)))) {
printf("%s\n", "<< Error at fn. stat()");
return(0x00);
}

// Limitation
if(FSIZE<(stats.st_size)) {
printf("%s%d%s", "<< Could not load because the file size exceeds ", FSIZE, ".., ");
printf("%s%ld%s\n", "size: ", stats.st_size, "bytes");
return(0x00);
}

else fsize = (size_t) (stats.st_size);


/* Secure buffer */
r = (fsize);
INC(r);
p = (signed char(*)) malloc(r*(sizeof(signed char)));

if(!p) {
printf("%s\n", "<< Error at fn. malloc()");
return(0x00);
}


/* Open */
*(fd+(SI)) = open(filename,O_RDONLY|(O_BINARY));

r = (*(fd+(SI)));

if(!(r^(~(0x00)))) {
printf("%s\n", "<< Error at fn. open()");
return(r);
}

else {
// printf("%s%Xh\n", "File descriptor to read the file is: ", r);
}


/* Map on the RAM */
XOR(l,l);
XOR(i,i);
cur = (p);

while(1) {
/* Reading */
r = read(*(fd+(SI)),ldbuff,LDBUFF*(sizeof(*ldbuff)));
// An error has occurred at fn. read.
if(!(r^(~(0x00)))) {
printf("%s\n", "<< Error at fn. read()");
break;
}
// Successfully terminate
if(!r) {
*cur = (0x00);
break;
}
if(!(r^(EOF))) {
*cur = (0x00);
break;
}
/* Writing */
r = ncpy(cur,ldbuff,r);
if(!r) break;
ADD(cur,r);
ADD(i,r);
// Progress
if(verbose) printf("\r%s%d%s%d", "Mapping: ", i, "/", stats.st_size);
// CPU Idling
if(l<(SNOOZE)) l++;
else {
XOR(l,l);
Sleep(QUANTUM);
}}


// Aux.
if(verbose) {
printf("\n");
printf("\n");
}

/* output content of the file in column */
r = column(cols,algn,p);

if(!r) printf("%s\n", "<< Error at fn. column()");


if(verbose) printf("\n");

/* monitor
printf("%s%d\n", "Copied bytes: ", i);
//*/


/* Unmap */
free(p);

/* Close the file descriptor to read a file */
r = close(*(fd+(SI)));

if(!(r^(~(NIL)))) {
printf("%s\n", "<< Error at fn. close()");
return(r);
}

return(0x01);
}
