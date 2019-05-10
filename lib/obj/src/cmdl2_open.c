/* **** Notes

Commandlet to open a file

Attention:
This code
is for a doubly LL i.e.,
<NOT> for a circular LL..

Remarks:
Implemented along with fn. splt_free() and with fn. splt().
And also with an (errorflag) error flag to be added for code to run as far as possible to the end.
*/


# define external extern
# define C_CODE_STDS
# define C_AS
# include "./../../../incl/config.h"

unsigned(__stdcall cmdl2_open(void(*argp))) {

/* **** DATA, BSS and STACK */
external signed char(Announcements);
external signed int(Running);
external struct knot(*base);
external struct knot(*lead);

auto signed const(QUANTUM) = (0x10);
auto signed const(SNOOZE) = (0x04);
auto signed const(DELAY) = (0x02*(QUANTUM));

auto signed char const(DELIMITER) = (' ');
auto signed char const(LINEFEED) = ('\n');

auto struct knot(*cache);

auto signed int(i), (r);
auto signed int(count);
auto signed int(fd);

auto char signed(**pp);
auto char signed(*p);

auto char signed(c);
auto char signed(uncmpltflag);
auto char signed(errorflag);

/* **** CODE/TEXT */
Running++;

XOR(errorflag, errorflag);

/* **** Check the arguments */
r = ct_args(argp);

if(!r) {
printf("\n%s", ("<< Error at fn. ct_args() on fn. cmdl_open()."));
--Running;
return(~(NIL));
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
printf("%s\n", "<< Error at fn. splt() in fn. cmdl2_open()");
--Running;
return(XNOR(r));
}

else {
// To open file name p.
p = (*(pp+(r+(~(0x00)))));
}

/* opening */
fd = open(p, (O_RDONLY|(O_BINARY)));

if(!(fd^(~(0x00)))) {
printf("%s\n", "<< Error at fn. open()");
/*
--Running;
return(~(NIL));
//*/
OR(errorflag, 0x01);
}

else {
// Monitoring
// printf("\n%s", ("Opened at file: "), (p));
}


/* **** reading/writing */

XOR(uncmpltflag, uncmpltflag);
XOR(i, i);

if(!(errorflag)) {
while(1) {
if(Announcements) {
uncmpltflag++;
break;
}
/* reading */
r = read(fd, &c, sizeof(c));
if(!(r^(~(NIL)))) {
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
if(!(r^(~(NIL)))) {
printf("%s\n", "<< Error at fn. write()");
break;
}
// CPU idling
if(!(c^(DELIMITER))) {
Sleep(DELAY);
}
if(!(c^(LINEFEED))) {
Sleep(3*(DELAY));
}}}

/* Check an error flag e.g., and closing/unmapping on the RAM */
if(!errorflag) {
r = close(fd);
if(!(r^(~(0x00)))) {
printf("%s\n", "<< Error at fn. close()");
--Running;
return(r);
}}

/* Notificate */
if(uncmpltflag) printf("\n\n%s\n", "Attention: There was an interruption during reading and/or writing..");

/* Unmap all the buffers allocated by fn. splt() on the RAM */
r = splt_free(pp);

if(!r) {
printf("%s\n", "<< Error at fn. splt_free()");
--Running;
return(XNOR(r));
}

printf("\n");

--Running;
return(0x00);
}
