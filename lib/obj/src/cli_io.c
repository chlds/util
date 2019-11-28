/* **** Notes

Output Unicode characters in UTF-8 after decoding Unicode bytes input out of the key board.

Remarks:
Based on UTF-8

Notes:
An array of function pointers is not yet implemented..
*/


# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

# define COUNT_CP (0x04)

signed(__cdecl cli_io(signed char *argp,signed size)) {

/* **** DATA, BSS and STACK */
enum {
CTRL_AT,CTRL_A,CTRL_B,CTRL_C,
CTRL_D,CTRL_E,CTRL_F,CTRL_G,
CTRL_H,CTRL_I,CTRL_J,CTRL_K,
CTRL_L,CTRL_M,CTRL_N,CTRL_O,
CTRL_P,CTRL_Q,CTRL_R,CTRL_S,
CTRL_T,CTRL_U,CTRL_V,CTRL_W,
CTRL_X,CTRL_Y,CTRL_Z,CTRL_LSB,
CTRL_RS,CTRL_RSB,CTRL_CA,CTRL_LL,
};

enum {
OLD_INPUT,INPUT,OLD_OUTPUT,OUTPUT,
};

auto unsigned const UTF_8 = (65001);
auto signed const LIMIT = (0x01+(0x04));

auto signed char const(SP) = (' ');
auto signed char const(CR) = ('\r');
auto signed char const(LF) = ('\n');

auto unsigned codepage[COUNT_CP] = {
(unsigned) (0x00),
};

auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
// Backup the original code pages for console input/output.
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

/* Display the current code pages for console input/output.
printf("%s%d%s%d\n","Current Code Pages for Input/Output: ",*(codepage+(OLD_INPUT)),"/",*(codepage+(OLD_OUTPUT)));
printf("\n");
//*/

// Switch to the UTF-8 code page(s) for console input(/output).
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

/* Display the new current code pages for console input/output
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
//*/

/* Announcements
cputs("Please type the <Enter> key to stop.\n\n");
//*/


// get
r = cli_in(&i,argp,size);
if(!r) {
printf("%s\n","<< Error at fn. cli_in()");
return(0x00);
}

argp = (argp+(r));

if(i<(0x20)) {
*(--argp) = (signed char) (0x00);
// ..and run in an array of pointers for functions e.g.,
// r = *(cli_fn+(i)) (*(cli_fn_argp+(i)));
if(!(i^(CTRL_C))) return(0x00);
if(!(i^(CR))) return(0x00);
if(!(i^(LF))) return(0x00);
}

else {
// put
r = cli_out(-r+(argp));
if(!r) {
printf("%s\n","<< Error at fn. cli_out()");
return(0x00);
}
// limit
size = (-r+(size));
if(size<(LIMIT)) {
*argp = (0x00);
return(0x01);
}}


// Restore to the original code pages for console input/output.
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

return(0x01+(cli_io(argp,size)));
}
