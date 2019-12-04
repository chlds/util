/* **** Notes

Output Unicode characters in UTF-8.

Remarks:
Based on UTF-8
*/


# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/cli.h"

# define COUNT_CP (0x04)
# define BUFF (0x1000)

signed(__cdecl main(void)) {

/* **** DATA, BSS and STACK */
enum {
OLD_INPUT,INPUT,OLD_OUTPUT,OUTPUT,
};

auto unsigned const UTF_8 = (65001);
auto signed char const(SP) = (' ');
auto signed char const(CR) = ('\r');
auto signed char const(LF) = ('\n');

auto signed char buff[BUFF] = {
(signed char) (0x00),
};

auto unsigned codepage[COUNT_CP] = {
(unsigned) (0x00),
};

auto signed char *p;

auto signed i,l,r;
auto signed short flag;
auto signed char c;

auto CLI_STAT cli_stat = {
(0x00),
};

/* **** CODE/TEXT */
*(codepage+(OLD_INPUT)) = GetConsoleCP();
if(!(*(codepage+(OLD_INPUT)))) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. GetConsoleCP() with error no. ",r," or ",r);
return(0x00);
}

*(codepage+(OLD_OUTPUT)) = GetConsoleOutputCP();
if(!(*(codepage+(OLD_OUTPUT)))) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. GetConsoleOutputCP() with error no. ",r," or ",r);
return(0x00);
}

printf("%s%d%s%d\n","Current Code Pages for Input/Output: ",*(codepage+(OLD_INPUT)),"/",*(codepage+(OLD_OUTPUT)));
printf("\n");

r = SetConsoleCP(UTF_8);
if(!r) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. SetConsoleCP() with error no. ",r," or ",r);
return(0x00);
}

/*
r = SetConsoleOutputCP(UTF_8);
if(!r) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. SetConsoleOutputCP() with error no. ",r," or ",r);
return(0x00);
}
//*/

*(codepage+(INPUT)) = GetConsoleCP();
if(!(*(codepage+(INPUT)))) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. GetConsoleCP() with error no. ",r," or ",r);
return(0x00);
}

*(codepage+(OUTPUT)) = GetConsoleOutputCP();
if(!(*(codepage+(OUTPUT)))) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. GetConsoleOutputCP() with error no. ",r," or ",r);
return(0x00);
}

printf("%s%d%s%d\n","The new current Code Pages for Input/Output: ",*(codepage+(INPUT)),"/",*(codepage+(OUTPUT)));
printf("%s\n","The original code page for console input will be automatically restored after terminating this program.");
printf("\n");

// Announcements
cputs("Please type the <Enter> key to stop.\n\n");


r = cli_io(buff,BUFF,&cli_stat);
if(!r) printf("%s\n","<< Error at fn. cli_io()");

if(r) {
i = (r);
// Results
// 1/2.
printf("\n\n");
printf("%s","Content based on UTF-8: ");
r = cli_outs(buff);
// 2/2.
printf("\n");
printf("%s%d%s%d\n","The bytes/characters: ",ct(buff),"/",cli_count(buff));
// Aux.
printf("%s%d%s\n","Recurred ",i," times");
}


// Restore to the original code page for console input.
r = SetConsoleCP(*(codepage+(OLD_INPUT)));
if(!r) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. SetConsoleCP() with error no. ",r," or ",r);
return(0x00);
}

r = SetConsoleOutputCP(*(codepage+(OLD_OUTPUT)));
if(!r) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. SetConsoleOutputCP() with error no. ",r," or ",r);
return(0x00);
}

return(0x00);
}
