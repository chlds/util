/* **** **** Making a small shell

on branch develop
*/


# define C_CODE_STDS
# define C_AS
# define C_MT
# include "./../../../incl/config.h"

# define BUFF (0x400)

# define COUNT_FUNCTIONS (1+(8))
# define CMDFLAG (1)

# define global

global signed short(cmdl_time_Toggle) = (0x00);
global signed short(Announcements) = (0x00);
global signed(Running) = (0x01);
// fn. cmdl_exit() to finally subtract the value.

global struct knot(*base);
global struct knot(*lead);

/* **** entry point */
signed(__cdecl main(signed(argc), signed char(**argv), signed char(**envp))) {

auto signed const QUANTUM = (0x10);
auto signed const SNOOZE = (0x04);
auto signed const DELAY = (0x02*(QUANTUM));

auto struct knot(*cache);

/* **** commandlets
auto struct card(card_exit) = {
(signed char(*)) ("--exit"),
(signed short) (NIL),
(unsigned(__stdcall*) (void(*))) (cmdl2_exit),
(void(*)) (NIL),
(unsigned) (NIL), // thread_id i.e., a thread id
(void(*)) (NIL), // hdl i.e., a tread handle
(signed) (NIL),
(signed) (NIL),
(void(*)) (NIL)
};

auto struct card(card_help) = {
(signed char(*)) ("--help"),
(signed short) (NIL),
(unsigned(__stdcall*) (void(*))) (cmdl2_help),
(void(*)) (NIL),
(unsigned) (NIL),
(void(*)) (NIL),
(signed) (NIL),
(signed) (NIL),
(void(*)) (NIL)
};

auto struct card(card_clear) = {
(signed char(*)) ("--clear"),
(signed short) (NIL),
(unsigned(__stdcall*) (void(*))) (cmdl2_clear),
(void(*)) (NIL),
(unsigned) (NIL),
(void(*)) (NIL),
(signed) (NIL),
(signed) (NIL),
(void(*)) (NIL)
};

auto struct card(card_time) = {
(signed char(*)) ("--time"),
(signed short) (NIL),
(unsigned(__stdcall*) (void(*))) (cmdl2_time),
(void(*)) (NIL),
(unsigned) (NIL),
(void(*)) (NIL),
(signed) (NIL),
(signed) (NIL),
(void(*)) (NIL)
};

auto struct card(card_open) = {
(signed char(*)) ("--open"),
(signed short) (NIL),
(unsigned(__stdcall*) (void(*))) (cmdl2_open),
(void(*)) (NIL),
(unsigned) (NIL),
(void(*)) (NIL),
(signed) (NIL),
(signed) (NIL),
(void(*)) (NIL)
};

auto struct card(card_save) = {
(signed char(*)) ("--save"),
(signed short) (NIL),
(unsigned(__stdcall*) (void(*))) (cmdl2_save),
(void(*)) (NIL),
(unsigned) (NIL),
(void(*)) (NIL),
(signed) (NIL),
(signed) (NIL),
(void(*)) (NIL)
};

auto struct card(card_output) = {
(signed char(*)) ("--output"),
(signed short) (NIL),
(unsigned(__stdcall*) (void(*))) (cmdl2_output),
(void(*)) (NIL),
(unsigned) (NIL),
(void(*)) (NIL),
(signed) (NIL),
(signed) (NIL),
(void(*)) (NIL)
};

auto struct card(card_history) = {
(signed char(*)) ("--history"),
(signed short) (NIL),
(unsigned(__stdcall*) (void(*))) (cmdl2_history),
(void(*)) (NIL),
(unsigned) (NIL),
(void(*)) (NIL),
(signed) (NIL),
(signed) (NIL),
(void(*)) (NIL)
};

auto struct card(*(arr[COUNT_FUNCTIONS])) = {
(struct card(*)) (&card_exit),
(struct card(*)) (&card_help),
(struct card(*)) (&card_clear),
(struct card(*)) (&card_time),
(struct card(*)) (&card_save),
(struct card(*)) (&card_output),
(struct card(*)) (&card_history),
(struct card(*)) (NIL)
};
//*/


//* **** auxiliary
auto unsigned(__stdcall*(fn[COUNT_FUNCTIONS])) (void(*argp)) = {
(unsigned(__stdcall*) (void(*))) (cmdl2_exit),
(unsigned(__stdcall*) (void(*))) (cmdl2_help),
(unsigned(__stdcall*) (void(*))) (cmdl2_clear),
(unsigned(__stdcall*) (void(*))) (cmdl2_time2), // transparency
// (unsigned(__stdcall*) (void(*))) (cmdl2_time), // solid
(unsigned(__stdcall*) (void(*))) (cmdl2_open),
(unsigned(__stdcall*) (void(*))) (cmdl2_save),
(unsigned(__stdcall*) (void(*))) (cmdl2_output),
(unsigned(__stdcall*) (void(*))) (cmdl2_history),
(unsigned(__stdcall*) (void(*))) (NIL)
};

auto signed char(*(term[COUNT_FUNCTIONS])) = {
(char signed(*)) ("--exit"),
(char signed(*)) ("--help"),
(char signed(*)) ("--clear"),
(char signed(*)) ("--time"),
(char signed(*)) ("--open"),
(char signed(*)) ("--save"),
(char signed(*)) ("--output"),
(char signed(*)) ("--history"),
(char signed(*)) (NIL)
};
//*/


auto signed char(buff[BUFF]) = {
(signed char) (0x00)
};

auto unsigned(createdflags) = (0x00);
auto unsigned(stacksize) = (0x00);

auto signed i,l,r;
auto signed(count), (total);
auto signed(dif), (length);

auto signed short(flag);
auto signed char(c);

auto signed char *p = (NIL);


/* **** CODE/TEXT */
printf("\n");

printf("%s\n", "Please type --exit or press <Ctrl-C> to stop.");
printf("%s\n", "Command or text:");
printf("\n");

/* Initialize */
base = (0x00);
lead = (0x00);

i = (i^(i));

XOR(count, count);
XOR(total, total);
XOR(flag, flag);

while(2) {

/* Making a doubly LL after reading */
cache = (struct knot(*)) malloc(sizeof(struct knot));
if(!cache) {
printf("\n%s", "<< Error at fn. malloc()");
return(XNOR(r));
}

/* concatenate */
r = concat_ll(cache);
if(!r) {
printf("%s\n", "Error at fn. concat_ll()");
return(XNOR(r));
}

// init.
(*cache).thread = (void*) (0x00);
(*cache).tid = (unsigned) (0x00);

/* reading */
r = reading(buff,BUFF);
if(!(r^(~(0x00)))) {
printf("%s\n", "<< Error at fn. reading() with (~(0x00))");
return(r);
}
if(!r) {
printf("%s\n", "<< Error at fn. reading() with (0x00)");
return(XNOR(r));
}

/* allocate at the (*cache).p */
length = ct(buff);
if(!length) {
/* An error or empty..
printf("%s\n", "<< Error at fn. ct() or empty..");
// e.g., unmap the rest..
return(XNOR(r));
//*/
}

length++;
(*cache).p = (signed char(*)) malloc(length+(sizeof(c)));
if(!((*cache).p)) {
printf("%s\n", "<< Error at (*cache).p = malloc()");
// e.g., unmap the rest..
return(XNOR(r));
}

/* Copy at (*cache).p */
r = cpy((*cache).p,buff);
if(!r) {
/* An error or empty..
printf("%s\n", "<< Error at fn. cpy() or empty..");
// e.g., unmap the rest..
return(XNOR(r));
//*/
}

/* Is it a command or text.. */
AND((*lead).flag,0x00);
XOR(i,i);

while(*(term+(i))) {
r = cmpr_partially(&dif,buff,*(term+(i)));
if(!r) {
printf("%s\n", "<< Error at fn. cmpr_partially()");
// e.g., unmap the rest..
return(XNOR(r));
}

if(!dif) {
/* It has a commandlet. Run a multi-threading program or more */
OR((*lead).flag,CMDFLAG);
(*cache).thread = (void(*)) _beginthreadex(
(void(*)) (NIL),
(unsigned) (stacksize),
(unsigned(__stdcall*) (void(*))) (*(fn+(i))),
(void(*)) (*lead).p, // e.g., (*(argp+(i))),
(unsigned) (createdflags),
(unsigned(*)) &((*cache).tid)
);
if(!((*cache).thread)) {
printf("%s\n", "<< Error at fn. _beginthreadex()");
// e.g., unmap the rest..
return(XNOR(r));
}
break;
}

else i++;
}

/* Terminate */
if(!i) break;
}


/* Monitor behavior of the other sub-threads to be stopped by sub-thread cmdl2_exit. */
printf("\n");

while(0x01) {
if(!Running) break;
// printf("%s\n", "Waiting for all the sub-threads to stop");
if(DBG) printf(".. ");
/* CPU idling */
Sleep(DELAY);
}

/* Close/unmap the thread handles */
printf("\n");

XOR(l,l);
XOR(i,i);
cache = (base);
// Attention: Based on a doubly linked list i.e., not a circular linked list.
while(cache) {
if(DBG) printf("%s%p%s%u\n", "Thread handle/TID: ",(*cache).thread,"/",(*cache).tid);
if((*cache).thread) {
r = CloseHandle((*cache).thread);
if(!r) {
printf("%s\n", "<< Error at fn. CloseHandle()");
// e.g., unmap the rest..
return(~(NIL));
}
else l++;
}
cache = ((*cache).d);
i++;
}

// Monitoring
printf("%s%d%s%d\n", "Unmapped thread handles/knots: ",l,"/",i);

//* Auxiliarilly Outputting
printf("\n");
printf("%s\n", "<< Auxiliaries: Outputting");

i = (i^(i));
cache = (base);
while(cache) {
printf("%d%s%s\n", i++, ". ", (*cache).p);
cache = (struct knot(*)) (*cache).d;
}
//*/

printf("\n");

/* unmap at */
r = unmap2_ll(lead);
printf("%s%d%s\n", "Unmapped ", r, " knots.");

printf("%s\n", "All DONE!");

return(0x00);
}
