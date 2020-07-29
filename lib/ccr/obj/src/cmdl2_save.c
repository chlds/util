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
external signed short Announcements;
external signed Running;
external struct knot *base;
external struct knot *lead;

auto signed const QUANTUM = (0x10);
auto signed const SNOOZE = (0x04);
auto signed const DELAY = (0x02*(QUANTUM));

auto signed char **pp;
auto signed char *p;

auto struct knot *cache;

auto signed count;
auto signed fd;
auto signed i,r;

auto signed short flag;

auto signed char c;
auto signed char uncmpltflag;

/* **** CODE/TEXT */
Running++;

/* Count arguments */
r = ct_args(argp);

if(!r) {
printf("%s\n","<< Error at fn. ct_args()");
--Running;
return(XNOR(r));
}

// printf("%s%d\n","The numbre of arguments is: ",r);

if(r<(0x02)) {
printf("%s\n","Syntax: --save <file>");
printf("\n");
--Running;
return(XNOR(r));
}

/* Split out of the command line */
r = splt(&pp,argp);
if(!r) {
printf("%s\n","<< Error at fn. splt()");
--Running;
return(XNOR(r));
}

else {
// printf("%s%d\n","The numbre of splitted arguments is: ",r);
// Save as file name p.
p = (signed char(*)) (*(pp+(r+(~(0x00)))));
}

/* open */
flag = (0x00);
fd = open(p,O_WRONLY|(O_BINARY|(O_CREAT|(O_EXCL|(O_APPEND)))),S_IREAD|(S_IWRITE));
if(!(fd^(~(0x00)))) {
printf("%s\n","<< Could not open..");
flag++;
}

if(!flag) {
/* Writing */
XOR(uncmpltflag,uncmpltflag);
XOR(i,i);
cache = (struct knot(*)) (base);
while(cache) {
if(Announcements) {
uncmpltflag++;
break;
}
/* Check the command flag */
if(R(flag,*cache)) {
}
else {
count = ct(R(p,*cache));
if(!count) {
/* An error has occurred or empty..
printf("%s\n","<< Error at fn. ct()");
break;
//*/
}
r = write(fd,R(p,*cache),count);
if(!(r^(~(0x00)))) {
printf("%s\n","<< Error at fn. write()");
break;
}
/*
if(!r) {
printf("%s\n","<< Done with (NIL).");
break;
}
//*/
// Insert a linefeed
c = ('\n');
r = write(fd,&c,sizeof(c));
if(!(r^(~(0x00)))) {
printf("%s\n","<< Error at fn. write()");
break;
}}
cache = (struct knot(*)) R(d,*cache);
// CPU idling
if(i<(SNOOZE)) {
i++;
}
else {
XOR(i,i);
Sleep(DELAY);
}}
/* closing/unmapping on the RAM */
r = close(fd);
if(!(r^(~(0x00)))) {
printf("%s\n","<< Error at fn. close()");
--Running;
return(r);
}
/* Notificate */
r = printf("%s%s\n","Saved as: ",p);
if(uncmpltflag) printf("%s\n","Attention: There was an interruption during writing..");
}

/* Unmap all the buffers allocated by fn. splt() on the RAM */
r = spltfree(pp);
if(!r) {
printf("%s\n","<< Error at fn. spltfree()");
--Running;
return(XNOR(r));
}

printf("\n");

--Running;
return(0x00);
}
