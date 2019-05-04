/* **** Notes

To dump a file in the binary

Implemented with a flag to be added for code to run as far as possible to the end
*/


# define C_CODE_STDS
# include "./../../../incl/config.h"

# define BUFF (0x400)

# define MONITORING

/* **** entry point */
signed(__cdecl main(signed(argc), signed char(**argv), signed char(**envp))) {

/* **** DATA, BSS and STACK */
enum {
SI, DI, CACHE
};

auto signed const(QUANTUM) = (0x10);
auto signed const(SNOOZE) = (0x08);
auto signed const(DELAY) = (2*(QUANTUM));

auto signed const(COLUMN) = (0x10);
auto signed const(LIMIT) = (0x02);

auto signed(fd[2]) = {
(signed) (0x00)
};

auto signed(row) = (NIL);
auto signed(line) = (NIL);
auto signed(total) = (NIL);

auto signed(i), (l), (r);

auto signed short(quickflag);
auto signed short(flag);

auto signed char(buff[BUFF]);

auto unsigned char(c);

/* **** CODE/TEXT */
if(argc<(LIMIT)) {
printf("\n");
printf("%s\n", ("  Usage:"));
printf("%s\n", ("  dump [-options] <file>"));
return(0x00);
}

XOR(quickflag, quickflag);

if(LIMIT<(argc)) {
quickflag++;
}

/* Open */
*(fd+(SI)) = open(*(argv+(argc+(~(NIL)))), (O_RDONLY|(O_BINARY)));

r = (*(fd+(SI)));

if(!(r^(~(NIL)))) {
printf("\n%s", "<< Error at fn. open().");
return(r);
}

else {
// printf("\n%s%Xh", "A file descriptor to read the file is: ", r);
}

/* Outputting */
XOR(flag, flag);
XOR(l, l);

XOR(row, row);
NOT(row);

r = printf("%08d%s", line++, ": ");

while(1) {

/* Reading */
r = read(*(fd+(SI)), &c, sizeof(c));

// An error has occurred at fn. read.
if(!(r^(~(0x00)))) {
printf("%s\n", "<< Error at fn. read().");
break;
}

// Successfully terminate
if(!r) break;
if(!(r^(EOF))) break;

row = (row+(r));
total = (total+(r));

/* Writing */
if(!(row^(0x08))) r = printf("%s", " ");

if(row<(COLUMN)) {
r = printf("%s%02X", " ", c);
}
else {
if(!quickflag) {
Sleep(DELAY);
}
else {
if(l<(SNOOZE)) {
l++;
}
else {
XOR(l, l);
Sleep(DELAY);
}}
r = printf("\n");
r = printf("%08d%s", line++, ": ");
r = printf("%s%02X", " ", c);
XOR(row, row);
}}

/* Close the file descriptor to read a file */
r = close(*(fd+(SI)));

if(!(r^(~(NIL)))) {
printf("%s\n", "<< Error at fn. close().");
return(r);
}

else {
printf("\n");
// to monitor
// r = printf("%s%Xh\n", "Closed/unmapped a file descriptor and the return value is: ", r);
r = printf("%d%s\n", line, " lines");
r = printf("%s%d%s\n", "Total: ", total, " bytes");
}

/* Monitoring
printf("\n");
printf("%s\n", "All done!");
//*/

return(0x00);
}
