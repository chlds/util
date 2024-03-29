/* **** **** Making a small shell

on branch develop
*/


# define DUAL_CONFIG_H
# define SAT_H
# define C_H
# define WIN32_H
# define CBR
# include "./../../../incl/config.h"
# include "./../../../config.h"

# define BUFF (0x400)
# define WINDOW_OPS (0x03)
# define COUNT_FUNCTIONS (0x01+(0x01+(WINDOW_OPS+(0x08))))
# define CMDFLAG (1)

signed(__cdecl agent_sat(signed(argc),signed char(**argv),signed char(**envp))) {

auto signed char *cur,*base,*p;
auto void *v;
auto signed i,l,r;
auto signed count,total;
auto signed dif,length;
auto signed short flag;
auto signed char c;
auto SAT sat;
auto KNOT *cache,*knot;
// auto CARD **cards;
// auto CARD *card;
auto signed const QUANTUM = (0x10);
auto signed const SNOOZE = (0x04);
auto signed const DELAY = (0x03*(QUANTUM));
auto signed height = (21);
auto signed width = (7);
auto signed char *name = ("tahoma");
auto unsigned createdflags = (0x00);
auto unsigned stacksize = (0x00);
auto unsigned(__stdcall*(fn[COUNT_FUNCTIONS/* i.e., CARDS */])) (void(*argp)) = {
(unsigned(__stdcall*)(void*)) (cmdl2_exit),
(unsigned(__stdcall*)(void*)) (cmdl2_help),
(unsigned(__stdcall*)(void*)) (cmdl2_clear),
(unsigned(__stdcall*)(void*)) (cmdl2_time),
(unsigned(__stdcall*)(void*)) (cmdl2_save),
(unsigned(__stdcall*)(void*)) (cmdl2_open),
(unsigned(__stdcall*)(void*)) (cmdl2_output),
(unsigned(__stdcall*)(void*)) (cmdl2_history),
(unsigned(__stdcall*)(void*)) (cmdl2_min),
(unsigned(__stdcall*)(void*)) (cmdl2_max),
(unsigned(__stdcall*)(void*)) (cmdl2_restore),
(unsigned(__stdcall*)(void*)) (cmdl2_quit),
(unsigned(__stdcall*)(void*)) (0x00),
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
(char signed(*)) ("--min"),
(char signed(*)) ("--max"),
(char signed(*)) ("--restore"),
(char signed(*)) ("--quit"),
(char signed(*)) (0x00),
};

// process priorities
r = ps_priority(0x01);
if(!r) {
printf("%s \n","<< Error at fn. ps_priority()");
return(0x00);
}

// thread priorities
r = td_priority(0x01);
if(!r) {
printf("%s \n","<< Error at fn. td_priority()");
return(0x00);
}

// init.
AND(sat.announce,0x00);
AND(sat.toggle,0x00);
AND(sat.run,0x00);
AND(sat.period,0x00);
R(height,R(tf,sat)) = (height);
R(width,R(tf,sat)) = (width);
R(name,R(tf,sat)) = (name);

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
r = (r*(sizeof(*base)));
base = (signed char(*)) malloc(r);
if(!base) return(0x00);
cur = (base);
i = (OBJS);
while(i) {
*(--i+(R(cur,sat))) = (base);
*(i+(R(base,sat))) = (base);
}
i = (OBJS);
while(i) {
*(--i+(R(knot,R(reel,sat)))) = (0x00);
}
AND(R(insert,R(reel,sat)),0x00);

XOR(count,count);
XOR(total,total);
XOR(flag,flag);

while(2) {
if(sat.announce) break;
cache = (struct knot(*)) malloc(sizeof(*cache));
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
length = (length*(sizeof(*cur)));
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
if(!dif) {
/* It has a commandlet. Run a multi-threading program or more */
OR(R(flag,*cache),CMDFLAG);
// run in a sub-routine
v = cmdl_fn(i,&(R(tid,*cache)),&sat,fn);
R(thread,*cache) = (v);
if(DBG) printf("[HDL: %p] \n",R(thread,*cache));
if(DBG) printf("[TID: %d] \n",R(tid,*cache));
if(!v) {
// e.g., unmap the rest..
printf("%s \n","<< Error at fn. cmdl_fn()");
OR(R(announce,sat),0x01);
}
break;
}
i++;
}
// terminate
r = ct_v_b(term);
if(EQ(i,(--r))) break; // quit
if(!i) break; // exit
}

printf("\n");

/* Monitor behavior of the other sub-threads to be stopped by sub-thread cmdl2_exit. */
i = (0xFF);
while(0x01) {
printf("\r%s %d ","Sub-threads to be stopped: ",sat.run);
if(!(sat.run)) break;
/* CPU idling */
Sleep(DELAY);
--i;
if(i<(0x01)) {
printf("\n");
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
i = (OBJS);
while(i) {
*(--i+(R(cur,sat))) = (base);
*(i+(R(base,sat))) = (base);
}

printf("%s \n","All DONE!");

return(0x01);
}
