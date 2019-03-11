/* **** **** a commandlet for all the commandlets


to open a file


Attention:

This code
is for a doubly LL i.e.,
<NOT> for a circular LL..


Notes:

Implemented with fn. spl() and fn. spl_free().

And also with an (errorflag) error flag to be added for code to run as far as possible to the end.

*/



# define C_CODE_STDS
# define C_AS

# define external extern

# include "../decl/config.h"



char signed(__cdecl cmdl_open(void(*argp))) {


/* **** **** DATA */

external char signed(Announcements);
external int signed(Running);
external struct knot(*base);
external struct knot(*lead);

auto const int signed(SNOOZE) = (int signed) (0xFF);
auto const int signed(DELAY) = (int signed) (0x0F);
auto const char signed(DELIMITER) = (char signed) (' ');
auto const char signed(LINEFEED) = (char signed) ('\n');

auto struct knot(*cache);

auto int signed(i), (j), (l), (r);
auto int signed(count), (argc);
auto int signed(fd);

auto char signed(**pp);
auto char signed(*p);

auto char signed(c);
auto char signed(uncmpltflag);
auto char signed(errorflag);


/* **** **** CODE/TEXT */

(Running++);

XOR(errorflag, errorflag);


/* **** Check the arguments */

c = (char signed) ct_args(&i, (argp));

if(!(c^(~(NIL)))) {
printf("\n%s", ("<< Error at fn. ct_args() on fn. cmdl_open()."));
(--Running);
return(char signed) (~(NIL));
}

if(!(i^(1))) {
printf("\n%s", ("--open <file>"));
printf("\n");
(--Running);
return(char signed) (~(NIL));
}


/* **** splitting */

c = (char signed) spl(&pp, &i, (argp));

if(!(c^(~(NIL)))) {
printf("\n%s", ("<< Error at fn. spl() on fn. cmdl_open()."));
(--Running);
return(char signed) (~(NIL));
}

else {
// argc = (int signed) (i);
p = (char signed(*)) (*(pp+(i+(~(NIL)))));
}


/* **** opening */

fd = (int signed) open(p, (O_RDONLY|(O_BINARY)));

if(!(fd^(~(NIL)))) {
printf("\n%s", ("<< Error at fn. open()."));
/*
(--Running);
return(char signed) (~(NIL));
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
(uncmpltflag++);
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
(--Running);
return(char signed) (~(NIL));
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
(--Running);
return(char signed) (~(NIL));
}


printf("\n");


(--Running);

XOR(c, c);
return(char signed) (c);
}
