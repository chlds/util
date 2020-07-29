/* **** Notes

dupl [-options] <di> <si>

to duplicate/copy to file <di> out of file <si> in the binary format
*/


# define C_CODE_STDS
# define C_AS
# include "./../../../lib/incl/config.h"

# define BUFF (163840)
# define COUNT_FDS (2)

signed(__cdecl main(signed(argc),signed char(**argv),signed char(**envp))) {

/* **** DATA, BSS and STACK */
enum {
SI,DI,CACHE,
};

auto signed const THRESHOLD = (0x03);
auto signed const QUANTUM = (0x10);
auto signed const SNOOZE = (0x04);
auto signed const DELAY = (0x02*(QUANTUM));

auto signed fd[COUNT_FDS] = {
(signed) (0x00),
};

auto signed char buff[BUFF] = {
(signed char) (0x00),
};

auto struct stat stats;
auto signed long long totalfilesize;
auto signed total;

auto signed i,l,r;
auto signed short flag;

/* **** CODE/TEXT */
printf("\n");
printf("%s%d\n","Count the arguments: ",argc);

printf("\n");
if(argc<(THRESHOLD)) {
/* Display the help */
printf("%s\n","The arguments ..need three or more to duplicate to <DI> out of <SI> in the binary format. ");
printf("\n");
printf("%s\n","Usage: ");
printf("%s\n","dupl [-options] .. <destination_file> <source_file> ");
return(0x00);
}

/* Catch the file size */
r = stat(*(argv+(argc+(~(0x00)))),&stats);
if(!(r^(~(0x00)))) {
printf("%s\n","<< Error at fn. stat() ");
return(0x00);
}

totalfilesize = (stats.st_size);

/* Open a file descriptor for reading */
XOR(i,i);

r = open(*(argv+(argc+(--i))),O_RDONLY|(O_BINARY));
*(fd+(SI)) = (r);
if(!(r^(~(0x00)))) {
printf("%s\n","<< Error at fn. open() at SI ");
return(0x00);
}
else {
// Monitoring
printf("%s%Xh\n","<< Good! Opened at SI ..and the r is: ",r);
}

/* Open a file descriptor for writing */
r = open(*(argv+(argc+(--i))),O_WRONLY|(O_BINARY|(O_CREAT|(O_EXCL))),S_IREAD|(S_IWRITE));
*(fd+(DI)) = (r);
if(!(r^(~(0x00)))) {
printf("%s\n","<< Error at fn. open() at DI ");
return(0x00);
}
else {
// Monitoring
printf("%s%Xh\n","<< Good! Opened at DI ..and the r is: ",r);
}

printf("\n");

/* Duplicate */
XOR(total,total);
XOR(l,l);
flag = (0x00);

while(0x01) {
/* Reading */
r = read(*(fd+(SI)),buff,BUFF);
if(!r) {
printf("\n");
printf("%s\n","<< Good! All written (with NIL) ");
break;
}
if(!(r^(EOF))) {
printf("\n");
printf("%s\n","<< Good! All written (with EOF) ");
break;
}
/* An error has occurred at fn. read() */
if(!(r^(~(0x00)))) {
printf("\n");
printf("%s\n","<< Error at fn. read() ");
flag++;
break;
}
/* Writing after reading */
r = write(*(fd+(DI)),buff,r);
/* An error has occurred at fn. write() */
if(!(r^(~(0x00)))) {
printf("\n");
printf("%s\n","<< Error at fn. write() ");
flag++;
break;
}
total = (r+(total));
/* CPU idling */
if(l<(SNOOZE)) l++;
else {
XOR(l,l);
Sleep(DELAY);
}
// Monitoring
printf("\r%s%d%s%zd%s","Done ",total," bytes per ",totalfilesize," bytes");
}

/* Close all the file descriptors */
i = (COUNT_FDS);

while(i) {
r = close(*(fd+(--i)));
if(!(r^(~(0x00)))) {
printf("%s%d\n","<< Error at fn. close(*(fd+(--i))) ..and the i is: ",i);
return(0x00);
}}

printf("\n");

if(flag) {
printf("%s\n","Oops.. could not copy.. ");
return(0x00);
}

printf("%s\n","All done! ");

return(0x01);
}
