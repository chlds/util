/* **** Notes

dupl [-options] <di> <si>

to duplicate/copy to file <di> out of file <si> in the binary format
*/


# define C_CODE_STDS
# define C_AS
# include "./../../../incl/config.h"

# define BUFF (4096)
# define COUNT_FDS (2)

signed(__cdecl main(signed(argc), signed char(**argv), signed char(**envp))) {

/* **** DATA, BSS and STACK */
enum {
SI, DI, CACHE
};

auto signed const(THRESHOLD) = (0x03);
auto signed const(QUANTUM) = (0x10);
auto signed const(SNOOZE) = (0x04);
auto signed const(DELAY) = (0x02*(QUANTUM));

auto signed(fd[COUNT_FDS]) = {
(signed) (NIL)
};

auto signed char(buff[BUFF]) = {
(signed char) (NIL)
};

auto signed(i), (l), (r);
auto signed(total);

auto struct stat(stats);
auto signed long long(totalfilesize);

/* **** CODE/TEXT */
printf("\n");
printf("%s%d\n", "Count the arguments: ", argc);

if(argc<(THRESHOLD)) {
/* Display the help */
printf("%s\n", ("The arguments ..need three or more to duplicate to <DI> out of <SI> in the binary format."));
printf("\n");
printf("%s\n", ("Usage:"));
printf("%s\n", ("dupl [-options] .. <destination_file> <source_file>"));
return(0x00);
}

/* Catch the file size */
r = stat(*(argv+(argc+(~(NIL)))), (&stats));

if(!(r^(~(NIL)))) {
printf("\n%s", "<< Error at fn. stat().");
return(r);
}

else {
totalfilesize = (stats.st_size);
}


/* Open a file descriptor for reading */
XOR(i, i);

*(fd+(SI)) = open(*(argv+(argc+(--i))), (O_RDONLY|(O_BINARY)));

r = (*(fd+(SI)));

if(!(r^(~(NIL)))) {
printf("\n%s", ("<< Error at fn. open() at SI."));
return(r);
}
else {
// Monitoring
printf("\n%s%Xh", "<< Good! Opened at SI ..and the r is: ", r);
}


/* Open a file descriptor for writing */

*(fd+(DI)) = open(*(argv+(argc+(--i))), (O_WRONLY|(O_BINARY|(O_CREAT|(O_EXCL)))), (S_IREAD|(S_IWRITE)));

r = (*(fd+(DI)));

if(!(r^(~(NIL)))) {
printf("\n%s", ("<< Error at fn. open() at DI."));
return(r);
}
else {
// Monitoring
printf("\n%s%Xh", "<< Good! Opened at DI ..and the r is: ", r);
}

/* Duplicate */
XOR(total, total);
XOR(l, l);

printf("\n");

while(2) {

/* Reading */
r = read(*(fd+(SI)), buff, BUFF);

// Terminate
if(!r) {
printf("\n\n%s", "<< Good! All written. (with NIL)");
break;
}

// Also
if(!(r^(EOF))) {
printf("\n\n%s", "<< Good! All written. (with EOF)");
break;
}

/* An error has occurred at fn. read() */
if(!(r^(~(NIL)))) {
printf("\n%s", "<< Error at fn. read().");
// Close all the file descriptors
i = (COUNT_FDS);
while(i) {
r = close(*(fd+(--i)));
if(!(r^(~(NIL)))) {
printf("\n%s%d", ("<< Oops, error at fn. close(*(fd+(--i))) ..and the i is: "), (i));
return(r);
}}
return(~(NIL));
}

/* Writing after reading */
r = write(*(fd+(DI)), buff, r);

/* An error has occurred at fn. write() */
if(!(r^(~(NIL)))) {
printf("\n%s", "<< Error at fn. write().");
// Close all the file descriptors
i = (COUNT_FDS);
while(i) {
r = close(*(fd+(--i)));
if(!(r^(~(NIL)))) {
printf("\n%s%d", "<< Oops, error at fn. close(*(fd+(--i))) ..and the i is: ", i);
return(r);
}}
return(~(NIL));
}

total = (total+(r));

/* CPU idling */
if(l<(SNOOZE)) {
l++;
}
else {
XOR(l, l);
Sleep(DELAY);
}

// Monitoring
printf("\r%s%d%s%zd%s", "Done ", total, " bytes per ", totalfilesize, " bytes");
}

/* Close all the file descriptors */

i = (COUNT_FDS);

while(i) {
r = close(*(fd+(--i)));
if(!(r^(~(NIL)))) {
printf("\n%s%d", "<< Error at fn. close(*(fd+(--i))) ..and the i is: ", i);
return(r);
}}

printf("\n%s", "All done!");

return(0x00);
}
