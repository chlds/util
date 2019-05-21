/* **** Notes

Output a file in the text format
*/


#include <stdio.h>
#include <stdlib.h>
#include <process.h>

# include <fcntl.h>
# include <sys/stat.h>

# define BUFF (0x400)

signed(__cdecl main(signed(argc), signed char(**argv), signed char(**envp))) {

/* **** DATA, BSS and STACK */
enum {
STDIN, STDOUT, STDERR
};

enum {
SI, DI, CACHE
};

auto signed const(LIMIT) = (0x02);

auto signed const(QUANTUM) = (0x10);
auto signed const(SNOOZE) = (0x08);
auto signed const(DELAY) = (0x02*(QUANTUM));

auto signed const(DELAY_FOR_LF) = (50);
auto signed const(DELAY_FOR_SP) = (100);

auto signed char const(CR) = ('\r');
auto signed char const(LF) = ('\n');
auto signed char const(SP) = (' ');

auto signed(fd[2]) = {
(signed) (0x00)
};

auto unsigned char(buff[BUFF]);

auto signed(count);
auto signed(r);

auto unsigned char(c);

/* **** CODE/TEXT */
if(argc<(LIMIT)) {
/* Display a help */
printf("%s\n", "  The arguments need two (or more..)");
printf("\n");
printf("%s\n", "  Usage:");
printf("%s\n", "  cats [-options] <source_file>");
return(0x00);
}

/* Map to read on the RAM */
*(fd+(SI)) = open(*(argv+(argc+(~(0x00)))), O_RDONLY|(O_BINARY));

r = (*(fd+(SI)));

if(!(r^(~(0x00)))) {
printf("%s\n", "<< Error at fn. open()");
return(r);
}

/* Outputting */
count = (count^(count));

while(1) {
r = read(*(fd+(SI)), &c, sizeof(c));

if(!r) break;

/* Also */
if(!(r^(EOF))) {
printf("%s\n", "Done (along with the EOF)!");
break;
}

/* Errors */
if(!(r^(~(0x00)))) {
printf("%s\n", "<< Error at fn. read()");
break;
}

/* CPU idling */
if(!(c^(SP))) {
Sleep(DELAY_FOR_SP);
}

count = (count+(r));

/* Writing */
if(c<(0x7F)) {
if(0x1F<(c)) r = write(STDOUT, &c, r);
else printf(" %02X ", c);
}

else printf(" %02X ", c);

/* Errors */
if(!(r^(~(0x00)))) {
printf("%s\n", "<< Error at fn. write()");
break;
}

// A CPU idling after writing the Line Feed.
if(!(c^(LF))) {
Sleep(DELAY_FOR_LF);
}}

/* Close the file descriptor to read a file */
r = close(*(fd+(SI)));

if(!(r^(~(0x00)))) {
printf("%s\n", "<< Error at fn. close()");
return(r);
}

printf("\n");
printf("%s%d\n", "Count: ", count);

printf("%s\n", "All done!");

return (0x00);
}
