/* **** Notes

Output a file in the text format
*/


# define CAR
# include <stdio.h>
# include <stdlib.h>
# include <process.h>
# include <fcntl.h>
# include <sys/stat.h>
# include "./../../../lib/incl/config.h"

signed(__cdecl main(signed(argc),signed char(**argv),signed char(**envp))) {

auto signed count;
auto signed r;
auto signed short flag;
auto unsigned char c;
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

if(argc<(LIMIT)) {
/* Display a help */
printf("%s \n","  The arguments need two (or more..)");
printf("\n");
printf("%s \n","  Usage:");
printf("%s \n","  cats [-options] <source_file>");
return(0x00);
}

/* Map to read on the RAM */
r = open(*(argv+(argc+(~0x00))),O_RDONLY|(O_BINARY));
*(CLI_SI+(fd)) = (r);
if(!(r^(~0x00))) {
printf("%s \n","<< Error at fn. open()");
return(r);
}

/* Outputting */
AND(count,0x00);
AND(flag,0x00);
while(0x01) {
r = rd_b(*(CLI_SI+(fd)),&c,sizeof(c));
if(!r) break;
/* Also */
if(!(r^(EOF))) {
printf("%s \n","Done (along with the EOF)!");
break;
}
/* Errors */
if(!(r^(~0x00))) {
OR(flag,0x01);
printf("%s \n","<< Error at fn. rd_b()");
break;
}
/* CPU idling */
if(!(c^(SP))) sleep_b(DELAY_FOR_SP);
count = (r+(count));
/* Writing */
if(c<(0x7F)) {
if(0x1F<(c)) r = wr_b(CLI_OUT,&c,r);
else printf(" %02X ", c);
}
else printf(" %02X ", c);
if(!(r^(~0x00))) {
OR(flag,0x01);
printf("%s \n","<< Error at fn. wr_b()");
break;
}
// A CPU idling after writing the Line Feed.
if(!(c^(LF))) sleep_b(DELAY_FOR_LF);
}

/* Close the file descriptor to read a file */
r = close(*(CLI_SI+(fd)));
if(!(r^(~0x00))) {
printf("%s \n","<< Error at fn. close()");
return(r);
}

printf("\n");
if(flag) return(~0x00);

printf("%s %d \n","Count:",count);
printf("%s \n","All done!");

return (0x00);
}
