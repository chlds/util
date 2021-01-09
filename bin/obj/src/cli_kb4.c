/* **** Notes

Output characters in UTF-8.

Remarks:
Based on UTF-8
*/


# define CBR

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include <windows.h>
# include "../../../lib/incl/config.h"

signed(__cdecl main(void)) {

/* **** DATA, BSS and STACK */
auto signed(__cdecl *(io_f[])) (void) = {
GetConsoleOutputCP,
GetConsoleCP,
0x00,
};

auto signed char *b;
auto signed char *p;

auto cli_codepage_t codepage;
auto signed io[0x02];
auto signed i,r;
auto signed short flag;
auto signed char c;

auto CLI_STAT cli_stat = {
(0x00),
};

/* **** CODE/TEXT */
system("cls");

r = cli_backup_codepages_beta(0x00/* flag */,&codepage);
if(!r) {
printf("%s \n","<< Error at fn. cli_backup_codepages_beta()");
return(0x00);
}

r = cli_set_codepages_beta(CLI_UTF_8/* input */,0x00/* output */);
if(!r) {
printf("%s \n","<< Error at fn. cli_set_codepages_beta()");
return(0x00);
}

i = (0x02);
while(i) {
*(i+(io)) = (*(--i+(io_f)))();
if(!(*(i+(io)))) {
r = GetLastError();
printf("%s%d%s %d %s %Xh \n","<< Error at fn. (*(",i,"+(io_f)))() with error no.",r,"or",r);
return(0x00);
}}

printf("%s %d%s%d \n","Current codepages for Input/Output:",*(CLI_IN+(io)),"/",*(CLI_OUT+(io)));
printf("%s %d%s%d \n","Codepages backed up for Input/Output:",*(CLI_BASE+(R(io,codepage))),"/",*(CLI_OFFSET+(R(io,codepage))));
printf("%s \n","The original codepages for console input/output will be automatically restored after terminating this program.");
printf("\n");

// Announcements
cputs("Please type the <Enter> key to stop. \n\n");

r = (0x1000);
r = (r*(sizeof(*b)));
b = (signed char(*)) malloc(r);
if(!r) return(0x00);

*b = (0x00);
r = cli_io(r,b,&cli_stat);
if(!r) printf("%s \n","<< Error at fn. cli_io()");

if(r) {
i = (r);
// Results
// 1/2.
printf(" \n\n");
printf("%s ","Content based on UTF-8:");
r = cli_outs(b);
// 2/2.
printf(" \n\n");
printf("%s %d%s%d \n","The characters/bytes:",cli_count(b),"/",ct(b));
printf("%s %d %s \n","Recurred",i,"times");
}

r = rl(&b);
if(!r) return(0x00);

r = cli_restore_codepages_beta(0x00/* flag */,&codepage);
if(!r) {
printf("%s \n","<< Error at fn. cli_restore_codepages_beta()");
return(0x00);
}

printf(" \n");
printf("%s \n","Done!");

return(0x01);
}
