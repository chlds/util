/* **** Notes

Commandlet to save except the commandlets

Attention:
This code
is for a doubly LL i.e.,
<NOT> for a circular LL..

Remarks:
Implemented along with fn. spltfree() and with fn. splt()
*/


# define external extern
# define C_CODE_STDS
# define C_AS
# include "./../../../incl/config.h"

unsigned(__stdcall cmdl2_save(void(*argp))) {

/* **** DATA, BSS and STACK */
external signed char(Announcements);
external signed int(Running);
external struct knot(*base);
external struct knot(*lead);

auto signed const(QUANTUM) = (0x10);
auto signed const(SNOOZE) = (0x04);
auto signed const(DELAY) = (0x02*(QUANTUM));

auto struct knot(*cache);

auto signed(i), (r);
auto signed(count);
auto signed(fd);

auto signed char(**pp);
auto signed char(*p);

auto signed char(c);
auto signed char(uncmpltflag);

/* **** CODE/TEXT */
Running++;

/* Count arguments */
r = ct_args(argp);

if(!r) {
printf("%s\n", "<< Error at fn. ct_args() on fn. cmdl2_save()");
--Running;
return(XNOR(r));
}

// printf("%s%d\n", "The numbre of arguments is: ", r);

if(r<(2)) {
printf("%s\n", "--save <file>");
printf("\n");
--Running;
return(XNOR(r));
}

/* Split out of the command line */
r = splt(&pp, argp);

if(!r) {
printf("%s\n", "<< Error at fn. splt() on fn. cmdl2_save()");
--Running;
return(XNOR(r));
}

else {
// printf("%s%d\n", "The numbre of splitted arguments is: ", r);
// Save as file name p.
p = (signed char(*)) (*(pp+(r+(~(0x00)))));
}

/* open */
fd = open(p, (O_WRONLY|(O_BINARY|(O_CREAT|(O_EXCL|(O_APPEND))))), (S_IREAD|(S_IWRITE)));
if(!(fd^(~(NIL)))) {
--Running;
return(XNOR(r));
}

/* Writing */
XOR(uncmpltflag, uncmpltflag);
XOR(i, i);

cache = (struct knot(*)) (base);

while(cache) {
if(Announcements) {
uncmpltflag++;
break;
}
/* Check the command flag */
if((*cache).flag) {
}
else {
count = ct((*cache).p);
if(!count) {
/* An error has occurred or empty..
printf("%s\n", "<< Error at fn. ct() on fn. cmdl_save()");
break;
//*/
}
r = write(fd, (*cache).p, count);
if(!(r^(~(NIL)))) {
printf("%s\n", "<< Error at fn. write() in fn. cmdl2_save()");
break;
}
/*
if(!r) {
printf("%s\n", "<< Done with (NIL).");
break;
}
//*/
// Insert a linefeed
c = ('\n');
r = write(fd, &c, sizeof(c));
if(!(r^(~(NIL)))) {
printf("%s\n", "<< Error at fn. write() in fn. cmdl2_save()");
break;
}}
cache = (struct knot(*)) (*cache).d;
// CPU idling
if(i<(SNOOZE)) {
i++;
}
else {
XOR(i, i);
Sleep(DELAY);
}}

/* closing/unmapping on the RAM */
r = close(fd);

if(!(r^(~(NIL)))) {
printf("%s\n", "<< Error at fn. close() in fn. cmdl2_save()");
--Running;
return(r);
}

/* Notificate */
r = printf("%s%s\n", "Saved as: ", p);

if(uncmpltflag) {
printf("%s\n", "Attention: There was an interruption during writing..");
}

/* Unmap all the buffers allocated by fn. splt() on the RAM */
r = spltfree(pp);

if(!r) {
printf("%s\n", "<< Error at fn. spltfree() in fn. cmdl2_save()");
--Running;
return(XNOR(r));
}

printf("\n");

--Running;
return(0x00);
}
