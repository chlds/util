/* **** Notes
Commandlet to open a file

Attention:
This code
is for a doubly LL i.e.,
<NOT> for a circular LL..

Remarks:
Implemented with fn. spl() and fn. spl_free().
And also with an (errorflag) error flag to be added for code to run as far as possible to the end.
*/


# define external extern
# define C_CODE_STDS
# define C_AS
# include "./../../../incl/config.h"

unsigned int(__stdcall cmdl2_open(void(*argp))) {

/* **** DATA */
external signed char(Announcements);
external signed int(Running);
external struct knot(*base);
external struct knot(*lead);

auto signed int const(QUANTUM) = (0x10);
auto signed int const(SNOOZE) = (0x04);
auto signed int const(DELAY) = (0x02*(QUANTUM));

auto signed char const(DELIMITER) = (char signed) (' ');
auto signed char const(LINEFEED) = (char signed) ('\n');

auto struct knot(*cache);

auto signed int(i), (j), (l), (r);
auto signed int(count), (argc);
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

if(!(r^(1))) {
printf("\n%s", ("--open <file>"));
printf("\n");
--Running;
return(~(NIL));
}

/* **** splitting */

c = (char signed) spl(&pp, &i, (argp));

if(!(c^(~(NIL)))) {
printf("\n%s", ("<< Error at fn. spl() on fn. cmdl_open()."));
--Running;
return(~(NIL));
}

else {
// argc = (int signed) (i);
p = (*(pp+(i+(~(NIL)))));
}


/* **** opening */

fd = open(p, (O_RDONLY|(O_BINARY)));

if(!(fd^(~(NIL)))) {
printf("\n%s", ("<< Error at fn. open()."));
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
r = (int signed) read(fd, (&c), (sizeof(c)));
if(!(r^(~(NIL)))) {
printf("\n%s", ("<< Error at fn. read() on the fn. cmdl_open()."));
break;
}
if(!(r)) {
printf("\n\n%s%s", ("Read at file: "), (p));
break;
}
/* writing */
r = (int signed) write(COUT, (&c), (r));
if(!(r^(~(NIL)))) {
printf("\n%s", ("<< Error at fn. write() on the fn. cmdl_open()."));
break;
}
// CPU idling
if(!(c^(DELIMITER))) {
Sleep(DELAY);
}
if(!(c^(LINEFEED))) {
Sleep(3*(DELAY));
}}}


/* **** closing/unmapping on the RAM */

if(!(errorflag)) {
r = (int signed) close(fd);
if(!(r^(~(NIL)))) {
printf("\n%s", ("<< Error at fn. close()."));
--Running;
return(~(NIL));
}
else {
}}


/* **** Notificate */

if(uncmpltflag) {
printf("\n\n%s", ("Attention: There was an interruption during reading and/or writing.."));
}

else {
}


/* **** Unmap all the buffers allocated by fn. spl() on the RAM */

c = (char signed) spl_free(pp);

if(!(c^(~(NIL)))) {
printf("\n%s", ("<< Error at fn. spl_free()."));
--Running;
return(~(NIL));
}


printf("\n");


--Running;
return(0x00);
}
