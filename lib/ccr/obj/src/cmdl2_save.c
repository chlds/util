/* **** Notes

Commandlet to save except the commandlets

Attention:
This code
is for a doubly LL i.e.,
<NOT> for a circular LL..

Remarks:
Implemented along with fn. cv_v() and with fn. rl_v()
*/


# define C_CODE_STDS
# define CCR
# include "../../../incl/config.h"

unsigned(__stdcall cmdl2_save(SAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed const QUANTUM = (0x10);
auto signed const SNOOZE = (0x04);
auto signed const DELAY = (0x02*(QUANTUM));

auto KNOT *cache,*lead,*base;

auto signed char **pp;
auto signed char *p;

auto signed count;
auto signed fd;
auto signed i,r;
auto signed short flag;
auto signed char c;
auto signed char uncmpltflag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

INC(R(Running,*argp));

/* Count arguments */
cache = (*(CLI_INDEX+(R(knot,R(reel,*argp)))));
if(!cache) return(0x00);
p = (R(p,*cache));

r = ct_args(p);
if(!r) {
printf("%s \n","<< Error at fn. ct_args()");
DEC(R(Running,*argp));
return(0x00);
}

// printf("%s%d \n","The numbre of arguments is: ",r);

if(r<(0x02)) {
printf("%s \n","Syntax: --save <file>");
printf("\n");
DEC(R(Running,*argp));
return(0x00);
}

/* Split out of the command line */
r = cv_v(&pp,p);
if(!r) {
printf("%s \n","<< Error at fn. cv_v()");
DEC(R(Running,*argp));
return(0x00);
}

else {
// printf("%s%d \n","The numbre of splitted arguments is: ",r);
// Save as file name p.
p = (signed char(*)) (*(pp+(r+(~(0x00)))));
}

/* open */
flag = (0x00);
fd = open(p,O_WRONLY|(O_BINARY|(O_CREAT|(O_EXCL|(O_APPEND)))),S_IREAD|(S_IWRITE));
if(!(fd^(~(0x00)))) {
printf("%s \n","<< Could not open..");
flag++;
}

if(!flag) {
/* Writing */
XOR(uncmpltflag,uncmpltflag);
XOR(i,i);
base = (*(CLI_BASE+(R(knot,R(reel,*argp)))));
cache = (base);
while(cache) {
if(R(Announcements,*argp)) {
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
printf("%s \n","<< Error at fn. ct()");
break;
//*/
}
r = write(fd,R(p,*cache),count);
if(!(r^(~(0x00)))) {
printf("%s \n","<< Error at fn. write()");
break;
}
/*
if(!r) {
printf("%s \n","<< Done with (NIL).");
break;
}
//*/
// Insert a linefeed
c = ('\n');
r = write(fd,&c,sizeof(c));
if(!(r^(~(0x00)))) {
printf("%s \n","<< Error at fn. write()");
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
/* closing/unmapping out of the RAM */
r = close(fd);
if(!(r^(~(0x00)))) {
printf("%s \n","<< Error at fn. close()");
DEC(R(Running,*argp));
return(r);
}
/* Notificate */
r = printf("%s%s \n","Saved as: ",p);
if(uncmpltflag) printf("%s \n","Attention: There was an interruption during writing..");
}

/* Unmap all the buffers allocated by fn. cv_v() out of the RAM */
r = rl_v(&pp);
if(!r) {
printf("%s \n","<< Error at fn. rl_v()");
DEC(R(Running,*argp));
return(0x00);
}

printf("\n");

DEC(R(Running,*argp));

return(0x00);
}
