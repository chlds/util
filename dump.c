/* **** Notes

To dump a file in the binary

Implemented with a flag to be added for code to run as far as possible to the end

*/



# define C_CODE_STDS
# define BUFF (0x400)

# include "./incl/decl/config.h"

# define MONITORING

# ifdef MONITORING
# endif

/*
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif
//*/



/* **** entry point */

char signed(__cdecl main(char signed(argc), char signed(**argv), char signed(**envp))) {


/* **** DATA */

enum {
SI, DI, CACHE
};

auto const int signed(QUANTUM) = (int signed) (0x10);
auto const int signed(COLUMN) = (int signed) (0x10);
auto const int signed(LIMIT) = (int signed) (0x02);
auto const int signed(DELAY) = (int signed) (2*(QUANTUM));
// in milli-seconds

auto int signed(fd[2]) = {
(int signed) (NIL)
};

auto int signed(row) = (int signed) (NIL);
auto int signed(line) = (int signed) (NIL);
auto int signed(total) = (int signed) (NIL);

auto int signed(i), (j), (l), (r);

auto short int signed(quickflag);
auto short int signed(flag);

auto char signed(buff[BUFF]);

auto char signed(c);


/* **** **** CODE/TEXT */

if(argc<(LIMIT)) {
printf("\n");
printf("%s\n", ("  Usage:"));
printf("%s\n", ("  dump [-options] <file>"));
return(char signed) (NIL);
}


XOR(quickflag, quickflag);

if(LIMIT<(argc)) {
(quickflag++);
}


/* **** **** Open */

(*(fd+(SI))) = (int signed) open(*(argv+(argc+(~(NIL)))), (int signed) (O_RDONLY|(O_BINARY)));

r = (*(fd+(SI)));

if(!(r^(~(NIL)))) {
printf("\n%s", ("<< Error at fn. open()."));
return(~(NIL));
}

else {
// To monitor
// printf("\n%s%Xh", ("A file descriptor to read the file is: "), (r));
}


/* **** **** Outputting */

XOR(flag, flag);
XOR(l, l);

XOR(row, row);
NOT(row);

r = printf("%08d%s", (line++), (": "));

while(1) {

/* **** Reading */
r = (int signed) read(*(fd+(SI)), (&c), (sizeof(c)));

row = (int signed) (row+(r));
total = (int signed) (total+(r));

/* To successfully terminate */
if(!(r)) {
// Monitoring
// printf("\n\n%s", ("Done (with NIL)."));
break;
}

/* To also successfully terminate */
if(!(r^(EOF))) {
// Monitoring
// printf("\n\n%s", ("Done (with EOF)."));
break;
}

/* Errors */
if(!(r^(~(NIL)))) {
printf("\n%s", ("<< Error at fn. read()."));
// (flag++);
break;
}


/* **** Writing */

if(!(row^(0x08))) r = printf("%s", (" "));

if(row<(COLUMN)) {
r = printf("%s%02X", (" "), (c));
}
else {
if(!(quickflag)) {
Sleep(DELAY);
}
else {
if(l<(0x0F)) {
(l++);
}
else {
XOR(l, l);
Sleep(DELAY);
}}
r = printf("\n");
r = printf("%08d%s", (line++), (": "));
r = printf("%s%02X", (" "), (c));
XOR(row, row);
}}


/* **** **** Close the file descriptor to read a file */

r = (int signed) close(*(fd+(SI)));

if(!(r^(~(NIL)))) {
printf("\n%s", ("<< Error at fn. close()."));
return(~(NIL));
}

else {
printf("\n");
// to monitor
// r = printf("\n%s%Xh", ("Closed/unmapped a file descriptor and the return value is: "), (r));
r = printf("\n%d%s", (line), (" lines"));
r = printf("\n%s%d%s", ("Total: "), (total), (" bytes"));
}


/* **** To monitor
printf("\n");
printf("%s\n", ("All done!"));
//*/


XOR(c, c);
return(char signed) (c);
}
