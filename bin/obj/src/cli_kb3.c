/* **** Notes

Output Unicode characters in UTF-8.

Remarks:
Based on UTF-8
*/


# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

# define COUNT_CP (0x04)
# define BUFF (0x1000)

signed(__cdecl main(void)) {

/* **** DATA, BSS and STACK */
enum {
OUTPUT,INPUT,BACKUP,
};

auto unsigned const UTF_8 = (65001);
auto signed char const(SP) = (' ');
auto signed char const(CR) = ('\r');
auto signed char const(LF) = ('\n');

auto signed char buff2[BUFF] = {
(signed char) (0x00),
};

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

/* **** CODE/TEXT */
*(codepage+(OUTPUT)) = GetConsoleOutputCP();
if(!(*(codepage+(OUTPUT)))) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. GetConsoleOutputCP() with error no. ",r," or ",r);
return(0x00);
}

*(codepage+(INPUT)) = GetConsoleCP();
if(!(*(codepage+(INPUT)))) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. GetConsoleCP() with error no. ",r," or ",r);
return(0x00);
}

printf("%s%d%s%d\n","Current Code Pages for Input/Output: ",*(codepage+(INPUT)),"/",*(codepage+(OUTPUT)));
printf("\n");

r = SetConsoleCP(UTF_8);
if(!r) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. SetConsoleCP() with error no. ",r," or ",r);
return(0x00);
}

*(codepage+(BACKUP)) = (*(codepage+(INPUT)));

*(codepage+(INPUT)) = GetConsoleCP();
if(!(*(codepage+(INPUT)))) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. GetConsoleCP() with error no. ",r," or ",r);
return(0x00);
}

printf("%s%d%s%d\n","The new current Code Pages for Input/Output: ",*(codepage+(INPUT)),"/",*(codepage+(OUTPUT)));
printf("%s\n","The original code page for console input will be automatically restored after terminating this program.");
printf("\n");

// Announcements
cputs("Please type the <Enter> key to stop.\n\n");

flag = (0x00);
p = (buff2);
l = (BUFF);
l = (-0x04+(l));
while(0x01) {
r = cli_in(&i,buff,BUFF);
if(!r) {
printf("%s\n","<< Error at fn. cli_in()");
return(0x00);
}
r = ncpy(p,buff,r);
p = (p+(r));
if(!(i^(CR))) flag = (0x01);
if(!(i^(LF))) flag = (0x01);
if(flag) {
*(--p) = (0x00);
break;
}
r = cli_out(buff);
if(!r) {
printf("%s\n","<< Error at fn. cli_out()");
return(0x00);
}
// Limit
l = (-r+(l));
if(l<(0x01)) {
*p = (0x00);
break;
}}

// Results
// 1/2.
printf("\n\n");
printf("%s","Content based on UTF-8: ");
r = cli_outs(buff2);
// 2/2.
printf("\n");
printf("%s%d%s%d\n","The bytes/characters: ",r,"/",ct_characters(buff2));

// Notes
printf("%s\n","--notes: also count control characters (or non-printing characters (NPC)).");

// Restore to the original code page for console input.
r = SetConsoleCP(*(codepage+(BACKUP)));
if(!r) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. SetConsoleCP() with error no. ",r," or ",r);
return(0x00);
}

return(0x00);
}
