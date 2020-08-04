/* **** **** Making a small shell

on branch develop
*/


# define C_CODE_STDS
# define C_AS
# define C_MT
# include "./../../../lib/incl/config.h"

# define BUFF (0x400)

# define COUNT_FUNCTIONS (1+(8))
# define CMDFLAG (1)

# define global

global signed short cmdl_time_Toggle = (0x00);
global signed short Announcements = (0x00);
global signed Running = (0x01);
// fn. cmdl_exit() to finally subtract the value.

/* **** entry point */
signed(__cdecl main(signed(argc),signed char(**argv),signed char(**envp))) {

auto signed const QUANTUM = (0x10);
auto signed const SNOOZE = (0x04);
auto signed const DELAY = (0x02*(QUANTUM));

auto SAT sat;
auto KNOT *cache,*knot;

auto CARD **cards;
auto CARD *card;

auto unsigned(__stdcall*(fn[COUNT_FUNCTIONS/* i.e., CARDS */])) (void(*argp)) = {
(unsigned(__stdcall*) (void(*))) (cmdl2_exit),
(unsigned(__stdcall*) (void(*))) (cmdl2_help),
(unsigned(__stdcall*) (void(*))) (cmdl2_clear),
(unsigned(__stdcall*) (void(*))) (cmdl2_time),
(unsigned(__stdcall*) (void(*))) (cmdl2_save),
(unsigned(__stdcall*) (void(*))) (cmdl2_open),
(unsigned(__stdcall*) (void(*))) (cmdl2_output),
(unsigned(__stdcall*) (void(*))) (cmdl2_history),
(unsigned(__stdcall*) (void(*))) (0x00),
};

auto signed char *(term[COUNT_FUNCTIONS/* i.e., CARDS */]) = {
(char signed(*)) ("--exit"),
(char signed(*)) ("--help"),
(char signed(*)) ("--clear"),
(char signed(*)) ("--time"),
(char signed(*)) ("--save"),
(char signed(*)) ("--open"),
(char signed(*)) ("--output"),
(char signed(*)) ("--history"),
(char signed(*)) (0x00),
};

auto unsigned createdflags = (0x00);
auto unsigned stacksize = (0x00);

auto signed char *cur,*base,*p;

auto signed i,l,r;
auto signed count,total;
auto signed dif,length;

auto signed short flag;
auto signed char c;

/* **** CODE/TEXT */
/*
r = make_cards(term,fn,&cards);
if(!r) {
printf("%s \n","<< Error at fn. make_cards()");
return(0x00);
}
//*/

// announcements
printf("%s \n","Please type --exit or press <Ctrl-C> to stop.");
printf("%s \n","Command or text:");
printf("\n");

/* Initialize */
r = (BUFF);
r = (r*(sizeof(signed char)));
base = (signed char(*)) malloc(r);
if(!base) return(0x00);
cur = (base);
i = (COMMON_OBJS);
while(i) {
*(--i+(R(cur,sat))) = (base);
*(i+(R(base,sat))) = (base);
}
i = (COMMON_OBJS);
while(i) {
*(--i+(R(knot,R(reel,sat)))) = (0x00);
}
AND(R(insert,R(reel,sat)),0x00);

XOR(count,count);
XOR(total,total);
XOR(flag,flag);

while(2) {
if(Announcements) break;
cache = (struct knot(*)) malloc(sizeof(struct knot));
if(!cache) {
printf("%s \n","<< Error at fn. malloc()");
return(0x00);
}
R(thread,*cache) = (0x00);
R(tid,*cache) = (0x00);
R(p,*cache) = (0x00);
r = reading(cur,BUFF);
if(!(r^(~(0x00)))) {
printf("%s \n","<< Error at fn. reading() with (~(0x00))");
return(r);
}
if(!r) {
printf("%s \n","<< Error at fn. reading()");
return(0x00);
}
length = ct(cur);
length++;
length = (length*(sizeof(signed char)));
R(p,*cache) = (signed char(*)) malloc(length);
if(!(R(p,*cache))) {
printf("%s \n","<< Error at fn. malloc()");
return(0x00);
}
r = cpy(R(p,*cache),cur);
if(!r) {
/* empty or..
printf("%s \n","<< Error at fn. cpy()");
return(0x00);
//*/
}
// and concatenate
r = concat_ll(0x00/* doubly LL */,cache,&(R(reel,sat)));
if(!r) {
printf("%s \n","<< Error at fn. concat_ll()");
return(0x00);
}
/* Is it a command or text.. */
// cache = (*(CLI_INDEX+(R(knot,R(reel,sat)))));
AND(R(flag,*cache),0x00);
XOR(i,i);
while(*(term+(i))) {
r = cmpr_partially(&dif,cur,*(term+(i)));
if(!r) {
printf("%s \n","<< Error at fn. cmpr_partially()");
return(0x00);
}
if(!dif) {
/* It has a commandlet. Run a multi-threading program or more */
OR(R(flag,*cache),CMDFLAG);
// run in a sub-routine
R(thread,*cache) = (void(*)) _beginthreadex(0x00,stacksize,*(fn+(i)),&sat/* e.g., *(argp+(i)) */,createdflags,&(R(tid,*cache)));
if(!(R(thread,*cache))) {
// e.g., unmap the rest..
printf("%s \n","<< Error at fn. _beginthreadex()");
return(0x00);
}
break;
}
i++;
}
// terminate
if(!i) break;
}

/* Monitor behavior of the other sub-threads to be stopped by sub-thread cmdl2_exit. */
i = (0x00);
while(0x01) {
if(!Running) break;
// printf("%s \n","Waiting for all the sub-threads to stop");
if(DBG) printf(".. ");
/* CPU idling */
Sleep(DELAY);
i++;
if(0x10<(i)) {
printf("%s \n","<< Oops..");
break;
}}

printf("\n");

/* Close/unmap the thread handles */
XOR(l,l);
XOR(i,i);
cache = (*(CLI_BASE+(R(knot,R(reel,sat)))));
// Attention: Based on a doubly linked list i.e., not a circular linked list.
while(cache) {
if(DBG) printf("%s%p%s%u \n","Thread handle/TID: ",R(thread,*cache),"/",R(tid,*cache));
if(R(thread,*cache)) {
r = CloseHandle(R(thread,*cache));
if(!r) {
printf("%s \n","<< Error at fn. CloseHandle()");
// e.g., unmap the rest..
return(0x00);
}
else l++;
}
cache = R(d,*cache);
i++;
}

// Monitoring
printf("%s%d%s%d \n","Unmapped thread handles/knots: ",l,"/",i);

//* Auxiliarilly Outputting
printf("\n");
printf("%s \n","<< Auxiliaries: Outputting");

i = (0x00);
cache = (*(CLI_BASE+(R(knot,R(reel,sat)))));
while(cache) {
printf("%d%s%s \n",i++,". ",R(p,*cache));
cache = R(d,*cache);
}
//*/

printf("\n");

r = unmap_ll(0x00/* flag */,&(R(reel,sat)));
if(!r) {
printf("%s \n","<< Error at fn. unmap_ll()");
return(0x00);
}
else printf("%s%d%s \n","Unmapped ",r," knots.");

embed(0x00,base);
free(base);
base = (0x00);
cur = (base);
i = (COMMON_OBJS);
while(i) {
*(--i+(R(cur,sat))) = (base);
*(i+(R(base,sat))) = (base);
}

printf("%s \n","All DONE!");

return(0x01);
}
