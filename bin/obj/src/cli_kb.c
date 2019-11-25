/* **** Notes

Values on a key board

Remarks:
Based on UTF-8
*/


# include <conio.h>
# include <stdio.h>

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

auto signed char buff[BUFF] = {
(signed char) (0x00),
};

auto unsigned codepage[COUNT_CP] = {
(unsigned) (0x00),
};

auto signed char *p;

auto signed i,l,r;
auto signed char c;

/* **** CODE/TEXT */
l = (BUFF);
l = (l>>(0x02));

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

p = (buff);
while(0x02) {
--l;
if(l<(0x00)) break;
c = _getch();
*p = (c);
p++;
r = nbytechar(c);
i = (r);
while(--r) {
c = _getch();
*p = (c);
p++;
}
r = cli_out(-i+(p));
if(!(c^(CR))) break;
if(!(c^(LF))) break;
}

// Restore to the original code page for console input.

r = SetConsoleCP(*(codepage+(BACKUP)));
if(!r) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. SetConsoleCP() with error no. ",r," or ",r);
return(0x00);
}

return(0x00);
}
