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

global signed int(Running) = (0x01);
// fn. cmdl_exit() to finally subtract the value.

global struct knot(*base);
global struct knot(*lead);

/*
global struct yarn(yarn) = {
(struct knot(*)) (NIL),
(struct knot(*)) (NIL),
(char signed(*)) (NIL),
(char signed) (NIL),
(int signed) (NIL),
(void(*)) (NIL)
};
//*/


/* **** entry point */
signed int(__cdecl main(signed int(argc), signed char(**argv), signed char(**envp))) {

auto struct knot(*cache);

/* **** commandlets
auto struct card(card_exit) = {
(char signed(*)) ("--exit"),
(short int signed) (NIL),
(char signed(__cdecl*) (void(*))) (cmdl_exit),
(void(*)) (NIL),
(int unsigned) (NIL), // thread_id i.e., a thread id
(void(*)) (NIL), // hdl i.e., a tread handle
(int signed) (NIL),
(int signed) (NIL),
(void(*)) (NIL)
};

auto struct card(card_help) = {
(char signed(*)) ("--help"),
(short int signed) (NIL),
(char signed(__cdecl*) (void(*))) (cmdl_help),
(void(*)) (NIL),
(int unsigned) (NIL),
(void(*)) (NIL),
(int signed) (NIL),
(int signed) (NIL),
(void(*)) (NIL)
};

auto struct card(card_clear) = {
(char signed(*)) ("--clear"),
(short int signed) (NIL),
(char signed(__cdecl*) (void(*))) (cmdl_clear),
(void(*)) (NIL),
(int unsigned) (NIL),
(void(*)) (NIL),
(int signed) (NIL),
(int signed) (NIL),
(void(*)) (NIL)
};

auto struct card(card_time) = {
(char signed(*)) ("--time"),
(short int signed) (NIL),
(char signed(__cdecl*) (void(*))) (cmdl_time),
(void(*)) (NIL),
(int unsigned) (NIL),
(void(*)) (NIL),
(int signed) (NIL),
(int signed) (NIL),
(void(*)) (NIL)
};

auto struct card(card_open) = {
(char signed(*)) ("--open"),
(short int signed) (NIL),
(char signed(__cdecl*) (void(*))) (cmdl_open),
(void(*)) (NIL),
(int unsigned) (NIL),
(void(*)) (NIL),
(int signed) (NIL),
(int signed) (NIL),
(void(*)) (NIL)
};

auto struct card(card_save) = {
(char signed(*)) ("--save"),
(short int signed) (NIL),
(char signed(__cdecl*) (void(*))) (cmdl_save),
(void(*)) (NIL),
(int unsigned) (NIL),
(void(*)) (NIL),
(int signed) (NIL),
(int signed) (NIL),
(void(*)) (NIL)
};

auto struct card(card_output) = {
(char signed(*)) ("--output"),
(short int signed) (NIL),
(char signed(__cdecl*) (void(*))) (cmdl_output),
(void(*)) (NIL),
(int unsigned) (NIL),
(void(*)) (NIL),
(int signed) (NIL),
(int signed) (NIL),
(void(*)) (NIL)
};

auto struct card(card_history) = {
(char signed(*)) ("--history"),
(short int signed) (NIL),
(char signed(__cdecl*) (void(*))) (cmdl_history),
(void(*)) (NIL),
(int unsigned) (NIL),
(void(*)) (NIL),
(int signed) (NIL),
(int signed) (NIL),
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

auto unsigned int(__stdcall*(fn[COUNT_FUNCTIONS])) (void(*argp)) = {
(unsigned int(__stdcall*) (void(*))) (cmdl2_exit),
(unsigned int(__stdcall*) (void(*))) (cmdl2_help),
(unsigned int(__stdcall*) (void(*))) (cmdl2_clear),
(unsigned int(__stdcall*) (void(*))) (cmdl2_time),
(unsigned int(__stdcall*) (void(*))) (cmdl2_open),
(unsigned int(__stdcall*) (void(*))) (cmdl2_save),
(unsigned int(__stdcall*) (void(*))) (cmdl2_output),
(unsigned int(__stdcall*) (void(*))) (cmdl2_history),
(unsigned int(__stdcall*) (void(*))) (NIL)
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



auto unsigned int(thread_id[COUNT_THREADS]) = {
(unsigned int) (NIL)
};


auto void(*thread[COUNT_THREADS]) = {
(void(*)) (NIL)
};


auto signed char(buff[BUFF]) = {
(signed char) (NIL)
};

auto unsigned int(stacksize) = (NIL);
auto unsigned int(createdflags) = (NIL);

auto signed int(i), (j), (l), (r);
auto signed int(count), (total);
auto signed int(length);

auto signed short(flag);
auto signed char(c);

auto char signed(*p) = (char signed(*)) (NIL);




/* **** **** **** **** CODE/TEXT */
/* **** Notification */

printf("\n%s", ("Please type --exit or press <Ctrl-C> to stop."));
printf("\n%s", ("Command or text:"));
printf("\n\n");


/* **** **** Initialize */

base = (void(*)) (NIL);
lead = (void(*)) (NIL);

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

r = (int signed) read(CIN, (&c), (sizeof(c)));

if(!(r^(~(NIL)))) {
printf("\n%s", ("<< Error at fn. read()."));
return(char signed) (~(NIL));
}

if(!(c^('\r'))) {
(*(buff+(i))) = (char signed) (NIL);
(i++);
// flag = (flag^(flag));
break;
}

if(!(c^('\n'))) {
(*(buff+(i))) = (char signed) (NIL);
(i++);
// flag = (flag^(flag));
break;
}

count = (int signed) (r);

(*(buff+(i))) = (char signed) (c);
(i++);

/* **** CPU idling */
// Sleep(DELAY);

/* **** writing
r = (int signed) write(COUT, (&c), (count));
if(!(r^(~(NIL)))) {
printf("\n%s", ("<< Error at fn. write()."));
return(char signed) (~(NIL));
}
//*/

}




/* **** **** Making a doubly LL after reading */

cache = (struct knot(*)) malloc(sizeof(struct knot));

if(!(cache)) {
printf("\n%s", ("<< Error at fn. malloc()."));
return(~(NIL));
}


/* **** concatenate */

r = concat_ll(cache);

if(!r) {
printf("%s\n", ("Error at fn. concat_ll()."));
return(~(NIL));
}


/* **** allocate at the (*cache).p */

length = ct(buff);

if(!length) {
printf("\n%s", ("<< Error at fn. ct()."));
// e.g., unmap the rest..
return(~(NIL));
}
(*cache).p = (char signed(*)) malloc(length+(sizeof(c)));
if(!((*cache).p)) {
printf("\n%s", ("<< Error at fn. malloc() of the ((*(cache)).p)."));
// e.g., unmap the rest..
return(~(NIL));
}


/* **** Copy at (*cache).p */

c = cp_lett(&length, (*cache).p, (buff));

if(!(c^(~(NIL)))) {
printf("\n%s", ("<< Error at fn. cp_lett()."));
// e.g., unmap the rest..
return(~(NIL));
}




/* **** Is it a command or text */

AND((*lead).flag, NIL);
XOR(i, i);

while(*(term+(i))) {

c = cmp_lett_partially(&r, (buff), (*(term+(i))));

if(!(c^(~(NIL)))) {
printf("\n%s", ("<< Error at fn. cmp_lett_partially()."));
// e.g., unmap the rest..
return(~(NIL));
}

/* **** Run a multi-threading program or more */
if(!(r)) {

OR((*lead).flag, CMDFLAG);

(*(thread+(l))) = (void(*)) _beginthreadex(
(void(*)) (NIL),
(unsigned int) (stacksize),
(unsigned int(__stdcall*) (void(*))) (*(fn+(i))),
(void(*)) (*lead).p, // e.g., (*(argp+(i))),
(unsigned int) (createdflags),
(unsigned int(*)) (thread_id+(j++))
);

if(!(*(thread+(l++)))) {
printf("\n%s", ("<< Error at fn. _beginthreadex()."));
// e.g., unmap the rest..
return(~(NIL));
}
break;
}
else {
(i++);
}}

/* **** Terminate */
if(!(i)) {
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

/* **** Close/unmap the thread handlers */
printf("\n");

i = (i^(i));
while(l) {
r = CloseHandle(*(thread+(--l)));
if(!(r)) {
printf("\n%s", ("<< Error at fn. CloseHandle()."));
// e.g., unmap the rest..
return(~(NIL));
}
(i++);
}

// Monitoring
printf("%s%d\n", ("The number of the unmapped thread handlers: "), (i));


/* **** Outputting */
printf("\n%s", ("<< Auxiliaries: Outputting"));
printf("\n");

cache = (struct knot(*)) (base);
i = (i^(i));

while(cache) {
printf("\n%d%s%s", (i++), (". "), (*cache).p);
cache = (struct knot(*)) (*cache).d;
}
//*/


/* **** unmap at */
printf("\n");

r = unmap2_ll(lead);
printf("%s%d%s\n", ("Unmapped the "), (r), (" knots."));

printf("\n%s", ("All DONE!"));
return(0x00);
}
