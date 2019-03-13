/* **** Notes

A program to use a variadic function

*/



# define C_CODE_STDS

# include "./incl/decl/config.h"

/*
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif
//*/



char signed(__cdecl concat(char signed(*argp), ...)) {


auto const int signed(QUANTUM) = (int signed) (0x10);
auto const int signed(SNOOZE) = (int signed) (0x10);
auto const int signed(DELAY) = (int signed) (2*(QUANTUM));

auto char signed(*bp);
auto char signed(*p);

auto int signed(i);

auto char signed(c);


if(!(argp)) {
printf("%s\n", ("<< Error at fn. concat(). It is the null pointer.."));
return(char signed) (~(NIL));
}


printf("\n");

XOR(i, i);
p = (char signed(*)) (argp);

va_start(bp, argp);

while(p) {
printf("%s", (p));
p = (char signed(*)) va_arg(bp, char signed*);
// CPU idling
if(i<(SNOOZE)) {
(i++);
}
else {
XOR(i, i);
Sleep(DELAY);
}}

va_end(bp); // unmapping a buffer on the RAM

printf("\n");

XOR(c, c);
return(char signed) (c);
}



/* **** **** entry point */

char signed(__cdecl main(char signed(argc), char signed(**argv), char signed(**envp))) {


/* **** **** DATA */

auto const int signed(QUANTUM) = (int signed) (0x10);
auto const int signed(DELAY) = (int signed) (2*(QUANTUM));
// in milli-seconds

auto char signed(*p0) = (char signed(*)) ("A");
auto char signed(*p1) = (char signed(*)) (" ");
auto char signed(*p2) = (char signed(*)) ("sunny day");
auto char signed(*p3) = (char signed(*)) (".");

auto char signed(c);


/* **** **** CODE/TEXT */

c = (char signed) concat(p0, p1, p2, p3, (NIL));

if(!(c^(~(NIL)))) {
printf("%s\n", ("<< Error at fn. concat()."));
}

XOR(c, c);
return(char signed) (c);
}
