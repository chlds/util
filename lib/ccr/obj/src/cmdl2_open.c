/* **** Notes

Commandlet to open a file

Attention:
This code
is for a doubly LL i.e.,
<NOT> for a circular LL..

Remarks:
Implemented along with fn. cv_v() and with fn. rl_v().
And also with a flag to be added for code to run as far as possible to the end.
*/


# define C_CODE_STDS
# define CCR
# include "../../../incl/config.h"

unsigned(__stdcall cmdl2_open(SAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed const QUANTUM = (0x10);
auto signed const SNOOZE = (0x04);
auto signed const DELAY = (0x02*(QUANTUM));

auto signed char const DELIMITER = (' ');
auto signed char const LINEFEED = ('\n');

auto KNOT *cache,*lead,*base;

auto signed char **pp;
auto signed char *p;

auto signed count;
auto signed fd;
auto signed i,r;

auto signed short interrupt_flag;
auto signed char c;

/* **** CODE/TEXT */
if(!argp) return(0x00);

INC(R(Running,*argp));

/* **** Check the arguments */
cache = (*(CLI_INDEX+(R(knot,R(reel,*argp)))));
if(!cache) {
DEC(R(Running,*argp));
return(0x00);
}

p = (R(p,*cache));

r = ct_args(p);
if(!r) {
printf("%s \n","<< Error at fn. ct_args()");
DEC(R(Running,*argp));
return(0x00);
}

if(r<(0x02)) {
printf("%s \n","--open <file>");
printf("\n");
DEC(R(Running,*argp));
return(0x00);
}

/* splitting */
r = cv_v(&pp,p);
if(!r) {
printf("%s \n","<< Error at fn. cv_v()");
DEC(R(Running,*argp));
return(0x00);
}

else {
// To open file name p.
p = (*(pp+(r+(~(0x00)))));
}

/* opening */
fd = open(p,O_RDONLY|(O_BINARY));
if(!(fd^(~(0x00)))) {
printf("%s \n","<< Error at fn. open()");
DEC(R(Running,*argp));
return(0x00);
}
// else printf("%s%s \n","Opened at file: ",p);

/* reading/writing */
XOR(interrupt_flag,interrupt_flag);
XOR(i,i);

while(1) {
if(R(Announcements,*argp)) {
interrupt_flag++;
break;
}
/* reading */
r = read(fd,&c,sizeof(c));
if(!(r^(~(0x00)))) {
printf("%s \n","<< Error at fn. read()");
break;
}
if(!r) {
printf("\n");
printf("%s%s \n","Read at file: ",p);
break;
}
/* Writing */
r = write(COUT,&c,r);
if(!(r^(~(0x00)))) {
printf("%s \n","<< Error at fn. write()");
break;
}
// CPU idling
if(!(c^(DELIMITER))) {
Sleep(DELAY);
}
if(!(c^(LINEFEED))) {
Sleep(0x03*(DELAY));
}}

/* Notificate */
if(interrupt_flag) printf("\n\n%s \n","Attention: There was an interruption during reading and/or writing..");

/* Check an error flag e.g., and closing/unmapping out of the RAM */
r = close(fd);
if(!(r^(~(0x00)))) {
printf("%s \n","<< Error at fn. close()");
DEC(R(Running,*argp));
return(0x00);
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

return(0x01);
}
