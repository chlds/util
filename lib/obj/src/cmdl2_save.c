/* **** Notes
Commandlet to save except the commandlets

Attention:
This code
is for a doubly LL i.e.,
<NOT> for a circular LL..

Remarks:
Implemented with fn. spl() and fn. spl_free()
*/


# define external extern
# define C_CODE_STDS
# define C_AS
# include "./../../../incl/config.h"

unsigned int(__stdcall cmdl2_save(void(*argp))) {

/* **** DATA */
external signed char(Announcements);
external signed int(Running);
external struct knot(*base);
external struct knot(*lead);

auto signed int const(QUANTUM) = (0x10);
auto signed int const(SNOOZE) = (0x04);
auto signed int const(DELAY) = (0x02*(QUANTUM));

auto struct knot(*cache);

auto signed int(i), (j), (l), (r);
auto signed int(count), (argc);
auto signed int(fd);

auto signed char(**pp);
auto signed char(*p);

auto signed char(c);
auto signed char(uncmpltflag);

/* **** CODE/TEXT */
Running++;

/* **** Check the arguments */
r = ct_args(argp);

if(!r) {
printf("\n%s", ("<< Error at fn. ct_args() on fn. cmdl2_save()."));
--Running;
return(~(NIL));
}

if(!(r^(1))) {
printf("\n%s", ("--save <file>"));
printf("\n");
--Running;
return(~(NIL));
}


/* **** open */
c = (char signed) spl(&pp, &i, (argp));

if(!(c^(~(NIL)))) {
printf("\n%s", ("<< Error at fn. spl() on fn. cmdl_save()."));
--Running;
return(~(NIL));
}

else {
// argc = (int signed) (i);
p = (char signed(*)) (*(pp+(i+(~(NIL)))));
}

fd = (int signed) open(p, (O_WRONLY|(O_BINARY|(O_CREAT|(O_APPEND)))), (S_IREAD|(S_IWRITE)));
if(!(fd^(~(NIL)))) {
(--Running);
return(char signed) (~(NIL));
}
else {
// Monitoring
// printf("\n%s", ("Opened file: "), (p));
}


/* **** writing */

XOR(uncmpltflag, uncmpltflag);
XOR(i, i);

cache = (struct knot(*)) (base);

while(cache) {
if(Announcements) {
(uncmpltflag++);
break;
}
/* Check the command flag */
if((*cache).flag) {
}
else {
c = (char signed) ct_lett(&count, (*cache).p);
if(!(c^(~(NIL)))) {
printf("\n%s", ("<< Error at fn. ct_lett() on fn. cmdl_save()."));
break;
}
r = (int signed) write(fd, (*cache).p, (count));
if(!(r^(~(NIL)))) {
printf("\n%s", ("<< Error at fn. ct_lett() on the fn. cmdl_save()."));
break;
}
/*
if(!(r)) {
printf("\n%s", ("<< Done with (NIL)."));
break;
}
//*/
// Insert a linefeed
c = (char signed) ('\n');
r = write(fd, (&c), (sizeof(c)));
if(!(r^(~(NIL)))) {
printf("\n%s", ("<< Error at fn. ct_lett() on the fn. cmdl_save()."));
break;
}}
cache = (struct knot(*)) (*cache).d;
// CPU idling
if(i<(SNOOZE)) {
(i++);
}
else {
XOR(i, i);
Sleep(DELAY);
}}


/* **** closing/unmapping on the RAM */

r = (int signed) close(fd);

if(!(r^(~(NIL)))) {
printf("\n%s", ("<< Error at fn. close()."));
--Running;
return(~(NIL));
}
else {
}


/* **** Notificate */

r = (int signed) printf("\n%s%s", ("Saved as: "), (p));

if(uncmpltflag) {
printf("\n%s", ("Attention: There was an interruption during writing.."));
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
