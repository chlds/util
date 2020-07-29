/* **** Notes

Commandlet to open a file

Attention:
This code
is for a doubly LL i.e.,
<NOT> for a circular LL..

Remarks:
Implemented along with fn. spltfree() and with fn. splt().
And also with a flag to be added for code to run as far as possible to the end.
*/


# define external extern
# define C_CODE_STDS
# define C_AS
# include "./../../../incl/config.h"

unsigned(__stdcall cmdl2_open(void(*argp))) {

/* **** DATA, BSS and STACK */
external signed short(Announcements);
external signed(Running);

external struct knot(*base);
external struct knot(*lead);

auto signed const(QUANTUM) = (0x10);
auto signed const(SNOOZE) = (0x04);
auto signed const(DELAY) = (0x02*(QUANTUM));

auto signed char const(DELIMITER) = (' ');
auto signed char const(LINEFEED) = ('\n');

auto struct knot(*cache);

auto signed(i), (r);
auto signed(count);
auto signed(fd);

auto signed char(**pp);
auto signed char(*p);

auto signed short(interrupt_flag);
auto signed char(c);

/* **** CODE/TEXT */
Running++;

/* **** Check the arguments */
r = ct_args(argp);

if(!r) {
printf("%s\n", "<< Error at fn. ct_args() on fn. cmdl_open()");
--Running;
return(XNOR(r));
}

if(r<(2)) {
printf("%s\n", "--open <file>");
printf("\n");
--Running;
return(XNOR(r));
}

/* splitting */
r = splt(&pp, argp);

if(!r) {
printf("%s\n", "<< Error at fn. splt()");
--Running;
return(XNOR(r));
}

else {
// To open file name p.
p = (*(pp+(r+(~(0x00)))));
}

/* opening */
fd = open(p, O_RDONLY|(O_BINARY));

if(!(fd^(~(0x00)))) {
printf("%s\n", "<< Error at fn. open()");
return(XNOR(r));
}
// else printf("%s%s\n", "Opened at file: ", p);

/* reading/writing */
XOR(interrupt_flag, interrupt_flag);
XOR(i, i);

while(1) {
if(Announcements) {
interrupt_flag++;
break;
}
/* reading */
r = read(fd, &c, sizeof(c));
if(!(r^(~(0x00)))) {
printf("%s\n", "<< Error at fn. read()");
break;
}
if(!r) {
printf("\n");
printf("%s%s\n", "Read at file: ", p);
break;
}
/* Writing */
r = write(COUT, &c, r);
if(!(r^(~(0x00)))) {
printf("%s\n", "<< Error at fn. write()");
break;
}
// CPU idling
if(!(c^(DELIMITER))) {
Sleep(DELAY);
}
if(!(c^(LINEFEED))) {
Sleep(3*(DELAY));
}}

/* Notificate */
if(interrupt_flag) printf("\n\n%s\n", "Attention: There was an interruption during reading and/or writing..");

/* Check an error flag e.g., and closing/unmapping on the RAM */
r = close(fd);
if(!(r^(~(0x00)))) {
printf("%s\n", "<< Error at fn. close()");
--Running;
return(r);
}

/* Unmap all the buffers allocated by fn. splt() on the RAM */
r = spltfree(pp);

if(!r) {
printf("%s\n", "<< Error at fn. spltfree()");
--Running;
return(XNOR(r));
}

printf("\n");

--Running;
return(0x00);
}
