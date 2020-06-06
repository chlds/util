/* **** Notes

Dump a file in the binary

Implemented with a flag to be added for code to run as far as possible to the end
*/


# define C_CODE_STDS
# define MONITORING (0x00)
# define BUFF (0x400)

# include "./../../../incl/config.h"
# include "./../../../incl/ascii_table.h"

/* **** entry point */
signed(__cdecl wmain(signed(argc),signed short(**argv),signed short(**envp))) {

/* **** DATA, BSS and STACK */
enum {
SI, DI, CACHE
};

auto signed const QUANTUM = (0x10);
auto signed const SNOOZE = (0x08);
auto signed const DELAY = (0x02*(QUANTUM));

auto signed const COLUMN = (0x10);
auto signed const LIMIT = (0x02);

auto signed fd[2] = {
(signed) (0x00)
};

auto signed row = (0x00);
auto signed line = (0x00);
auto signed total = (0x00);

auto signed i,l,r;
auto signed short quickflag;
auto signed short ascii_flag;

auto signed char buff[BUFF];
auto signed char **p;

auto unsigned char c;

/* **** CODE/TEXT */
if(argc<(LIMIT)) {
printf("\n");
printf("  %s\n","Usage:");
printf("  %s\n","dump [-options] <file>");
return(0x00);
}

XOR(quickflag,quickflag);
XOR(ascii_flag,ascii_flag);

if(LIMIT<(argc)) quickflag++;

if(0x03<(argc)) {
ascii_flag++;
p = (signed char(**)) (ascii);
}

r = _wopen(*(argv+(argc+(~(0x00)))),_O_RDONLY|_O_BINARY);
*(fd+(SI)) = (r);
if(!(r^(~(0x00)))) {
printf("%s\n","<< Error at fn. _wopen()");
return(r);
}
if(MONITORING) printf("%s%Xh\n","File descriptor to read the file is: ",r);

/* Outputting */
XOR(l,l);
XOR(row,row);
NOT(row);

r = printf("%08d%s ",line++,":");

while(1) {
r = read(*(fd+(SI)),&c,sizeof(c));
// An error has occurred at fn. read.
if(!(r^(~(0x00)))) {
printf("%s\n","<< Error at fn. read()");
break;
}
// Successfully terminate
if(!r) break;
if(!(r^(EOF))) break;
row = (row+(r));
total = (total+(r));
/* Writing */
if(!(row^(0x08))) printf(" ");
/* Branching 1/2 */
if(row<(COLUMN)) {
if(ascii_flag) {
if(c<(0x80)) printf("%s%3s"," ",*(c+(p)));
else printf("%s%3X"," ",c);
}
else printf("%s%02X"," ",c);
}
else {
if(!quickflag) Sleep(DELAY);
else {
if(l<(SNOOZE)) {
l++;
}
else {
XOR(l,l);
Sleep(DELAY);
}}
r = printf("\n");
r = printf("%08d%s ",line++,":");
/* Branching 2/2 */
if(ascii_flag) {
if(c<(0x80)) printf("%s%3s"," ",*(c+(p)));
else printf("%s%3X"," ",c);
}
else printf("%s%02X"," ",c);
XOR(row,row);
}}

/* Close the file descriptor to read a file */
r = _close(*(fd+(SI)));
if(!(r^(~(0x00)))) {
printf("%s\n","<< Error at fn. _close()");
return(r);
}
else {
printf("\n");
if(MONITORING) r = printf("%s%Xh\n","Closed/unmapped a file descriptor and the return value is: ",r);
r = printf("%d%s\n",line," lines");
r = printf("%s%d%s\n","Total: ",total," bytes");
}

if(MONITORING) {
printf("\n");
printf("%s\n","All done!");
}

return(0x00);
}
