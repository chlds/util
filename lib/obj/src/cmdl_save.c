/* **** **** a commandlet for all the commandlets


to save except the commandlets


Attention:

This code
is for a doubly LL i.e.,
<NOT> for a circular LL..


Notes:

Implemented with fn. spl() and fn. spl_free()

*/



# define C_CODE_STDS
# define C_AS

# define external extern

# include "./../../../incl/config.h"



char signed(__cdecl cmdl_save(void(*argp))) {


/* **** **** DATA */

external char signed(Announcements);
external int signed(Running);

external struct knot(*base);
external struct knot(*lead);

auto const int signed(SNOOZE) = (int signed) (0xFF);
auto const int signed(DELAY) = (int signed) (0x0F);

auto struct knot(*cache);

auto int signed(i), (j), (l), (r);
auto int signed(count), (argc);
auto int signed(fd);

auto char signed(**pp);
auto char signed(*p);

auto char signed(c);
auto char signed(uncmpltflag);


/* **** **** CODE/TEXT */

(Running++);


/* **** Check the arguments */

c = (char signed) ct_args(&i, (argp));

if(!(c^(~(NIL)))) {
printf("\n%s", ("<< Error at fn. ct_args() on fn. cmdl_save()."));
(--Running);
return(char signed) (~(NIL));
}

if(!(i^(1))) {
printf("\n%s", ("--save <file>"));
printf("\n");
(--Running);
return(char signed) (~(NIL));
}


/* **** open */

c = (char signed) spl(&pp, &i, (argp));

if(!(c^(~(NIL)))) {
printf("\n%s", ("<< Error at fn. spl() on fn. cmdl_save()."));
(--Running);
return(char signed) (~(NIL));
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
r = (int signed) write(fd, (&c), (sizeof(c)));
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
(--Running);
return(char signed) (~(NIL));
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
(--Running);
return(char signed) (~(NIL));
}


printf("\n");


(--Running);

XOR(c, c);
return(char signed) (c);
}
