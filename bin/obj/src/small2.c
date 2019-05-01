/* **** **** Making a small shell

on branch develop
*/


# define C_CODE_STDS
# define C_AS
# define C_MT
# include "./../../../incl/config.h"

# define BUFF (0x400)
# define DELAY (25)

# define COUNT_FUNCTIONS (1+(8))
# define COUNT_THREADS (0x100)
# define CMDFLAG (1)

# define global

global signed char(Announcements) = (NIL);
global signed char(cmdl_time_Toggle) = (NIL);

global signed(Running) = (0x01);
// fn. cmdl_exit() to finally subtract the value.

global struct knot(*base);
global struct knot(*lead);


/* **** entry point */
signed(__cdecl main(signed(argc), signed char(**argv), signed char(**envp))) {

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


//* **** aux. 1/2
auto unsigned(__stdcall*(fn[COUNT_FUNCTIONS])) (void(*argp)) = {
(unsigned(__stdcall*) (void(*))) (cmdl2_exit),
(unsigned(__stdcall*) (void(*))) (cmdl2_help),
(unsigned(__stdcall*) (void(*))) (cmdl2_clear),
(unsigned(__stdcall*) (void(*))) (cmdl2_time),
(unsigned(__stdcall*) (void(*))) (cmdl2_open),
(unsigned(__stdcall*) (void(*))) (cmdl2_save),
(unsigned(__stdcall*) (void(*))) (cmdl2_output),
(unsigned(__stdcall*) (void(*))) (cmdl2_history),
(unsigned(__stdcall*) (void(*))) (NIL)
};
//*/


//* **** aux. 2/2
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


auto unsigned(thread_id[COUNT_THREADS]) = {
(unsigned) (NIL)
};


auto void(*thread[COUNT_THREADS]) = {
(void(*)) (NIL)
};


auto signed char(buff[BUFF]) = {
(signed char) (NIL)
};

auto unsigned(stacksize) = (NIL);
auto unsigned(createdflags) = (NIL);

auto signed(i), (j), (l), (r);
auto signed(count), (total);
auto signed(dif), (length);

auto signed short(flag);
auto signed char(c);

auto signed char(*p) = (NIL);


/* **** CODE/TEXT */

printf("\n");
printf("%s\n", ("Please type --exit or press <Ctrl-C> to stop."));
printf("%s\n", ("Command or text:"));
printf("\n");

/* Initialize */
base = (NIL);
lead = (NIL);

count = (count^(count));
total = (total^(total));

l = (l^(l));
j = (j^(j));
i = (i^(i));

flag = (flag^(flag));

while(2) {

/* **** reading */
i = (i^(i));

while(1) {

r = read(CIN, &c, sizeof(c));

if(!(r^(~(NIL)))) {
printf("\n%s", ("<< Error at fn. read()."));
return(~(NIL));
}

if(!(c^('\r'))) {
*(buff+(i)) = (0x00);
i++;
// flag = (flag^(flag));
break;
}

if(!(c^('\n'))) {
*(buff+(i)) = (0x00);
i++;
// flag = (flag^(flag));
break;
}

count = (r);

*(buff+(i)) = (c);
i++;

/* **** CPU idling */
// Sleep(DELAY);

/* **** writing
r = write(COUT, &c, count);
if(!(r^(~(NIL)))) {
printf("\n%s", ("<< Error at fn. write()."));
return(~(NIL));
}
//*/

}



/* **** Making a doubly LL after reading */
cache = (struct knot(*)) malloc(sizeof(struct knot));

if(!cache) {
printf("\n%s", ("<< Error at fn. malloc()."));
return(~(NIL));
}

/* concatenate */
r = concat_ll(cache);

if(!r) {
printf("%s\n", ("Error at fn. concat_ll()."));
return(~(NIL));
}

/* allocate at the (*cache).p */
length = ct(buff);

if(!length) {
/* An error or empty..
printf("\n%s", ("<< Error at fn. ct()."));
// e.g., unmap the rest..
return(~(NIL));
//*/
}

(*cache).p = (signed char(*)) malloc(length+(sizeof(c)));
if(!((*cache).p)) {
printf("\n%s", ("<< Error at fn. malloc() of the ((*(cache)).p)."));
// e.g., unmap the rest..
return(~(NIL));
}


/* Copy at (*cache).p */
r = cpy((*cache).p, buff);

if(!r) {
/* An error or empty..
printf("\n%s", "<< Error at fn. cpy().");
// e.g., unmap the rest..
return(~(NIL));
//*/
}


/* **** Is it a command or text */
AND((*lead).flag, NIL);
XOR(i, i);

while(*(term+(i))) {

r = cmpr_partially(&dif, buff, *(term+(i)));

if(!r) {
printf("\n%s", "<< Error at fn. cmpr_partially().");
// e.g., unmap the rest..
return(~(NIL));
}

/* It has a commandlet. Run a multi-threading program or more */
if(!dif) {

OR((*lead).flag, CMDFLAG);

*(thread+(l)) = (void(*)) _beginthreadex(
(void(*)) (NIL),
(unsigned) (stacksize),
(unsigned(__stdcall*) (void(*))) (*(fn+(i))),
(void(*)) (*lead).p, // e.g., (*(argp+(i))),
(unsigned) (createdflags),
(unsigned(*)) (thread_id+(j++))
);

if(!(*(thread+(l++)))) {
printf("\n%s", ("<< Error at fn. _beginthreadex()."));
// e.g., unmap the rest..
return(~(NIL));
}
break;
}
else {
i++;
}}

/* **** Terminate */
if(!i) {
break;
}}


/* **** **** Check all the sub-threads */
printf("\n");

while(1) {
if(!Running) {
break;
}
// Monitoring
// printf("\n%s", ("Waiting for all the sub-threads to stop"));
printf(" ..");
/* **** CPU idling */
Sleep(3*(DELAY));
}

/* Close/unmap the thread handlers */
printf("\n");

i = (i^(i));
while(l) {
r = CloseHandle(*(thread+(--l)));
if(!r) {
printf("\n%s", "<< Error at fn. CloseHandle().");
// e.g., unmap the rest..
return(~(NIL));
}
i++;
}

// Monitoring
printf("%s%d\n", ("The number of the unmapped thread handlers: "), (i));


/* Auxiliarilly Outputting */
printf("\n%s", "<< Auxiliaries: Outputting");
printf("\n");

cache = (base);
i = (i^(i));

while(cache) {
printf("\n%d%s%s", i++, ". ", (*cache).p);
cache = (struct knot(*)) (*cache).d;
}
//*/


printf("\n");


/* unmap at */
r = unmap2_ll(lead);
printf("%s%d%s\n", "Unmapped the ", r, " knots.");


printf("\n%s", "All DONE!");

return(0x00);
}
