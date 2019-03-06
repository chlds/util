/* **** **** Making a small shell

on branch develop

*/




# define C_CODE_STDS
# define C_AS
# define C_MT

# include "./incl/decl/config.h"

# define BUFF (0x400)
# define DELAY (25)

# define COUNT_FUNCTIONS (1+(3))
# define COUNT_THREADS (0x100)

# define global




global char signed(Announcements) = (int signed) (NIL);
global int signed(Running) = (int signed) (1);
// fn. cmdl_exit() to subtract the value.

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




/* **** **** entry point */

char signed(__cdecl main(char signed(argc), char signed(**argv), char signed(**envp))) {


auto struct knot(*cache);


auto char signed(__cdecl*(fn[COUNT_FUNCTIONS])) (void(*argp)) = {
(char signed(__cdecl*) (void(*))) (cmdl_exit),
(char signed(__cdecl*) (void(*))) (cmdl_time),
(char signed(__cdecl*) (void(*))) (cmdl_output),
(char signed(__cdecl*) (void(*))) (NIL)
};


auto char signed(*(term[COUNT_FUNCTIONS])) = {
(char signed(*)) ("--exit"),
(char signed(*)) ("--time"),
(char signed(*)) ("--output"),
(char signed(*)) (NIL)
};


auto int signed(thread_id[COUNT_THREADS]) = {
(int signed) (NIL)
};


auto void(*thread[COUNT_THREADS]) = {
(void(*)) (NIL)
};


auto char signed(buff[BUFF]) = {
(char signed) (NIL)
};


auto int unsigned(stacksize) = (int unsigned) (NIL);
auto int unsigned(createdflags) = (int unsigned) (NIL);

auto int signed(i), (j), (l), (r);
auto int signed(count), (total);
auto int signed(length);

auto char signed(flag);
auto char signed(c);

auto char signed(*p) = (char signed(*)) (NIL);




/* **** **** **** **** CODE/TEXT */
/* **** Notification */

printf("\n%s", ("Please type --exit or press <Ctrl-C> to stop."));
printf("\n%s", ("Command or text:"));
printf("\n");


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
return(char signed) (~(NIL));
}


/* **** concatenate */

if(!(lead)) {
base = (struct knot(*)) (cache);
}
else {
(*lead).d = (struct knot(*)) (cache);
}
(*cache).s = (struct knot(*)) (lead);
lead = (struct knot(*)) (cache);
(*lead).d = (struct knot(*)) (NIL);


/* **** allocate at the (*cache).p */

c = (char signed) ct_lett(&length, (buff));

if(!(c^(~(NIL)))) {
printf("\n%s", ("<< Error at fn. ct_lett()."));
// e.g., unmap the rest..
return(char signed) (~(NIL));
}
(*cache).p = (char signed(*)) malloc(length+(sizeof(c)));
if(!((*cache).p)) {
printf("\n%s", ("<< Error at fn. malloc() of the ((*(cache)).p)."));
// e.g., unmap the rest..
return(char signed) (~(NIL));
}


/* **** Copy at (*cache).p */

c = (char signed) cp_lett(&length, (*cache).p, (buff));

if(!(c^(~(NIL)))) {
printf("\n%s", ("<< Error at fn. cp_lett()."));
// e.g., unmap the rest..
return(char signed) (~(NIL));
}




/* **** Is it a command or text */

i = (i^(i));

while(*(term+(i))) {

c = (char signed) cmp_lett_partially(&r, (buff), (*(term+(i))));

if(!(c^(~(NIL)))) {
printf("\n%s", ("<< Error at fn. cmp_lett_partially()."));
// e.g., unmap the rest..
return(char signed) (~(NIL));
}

/* **** Run a multi-threading program or more */
if(!(r)) {
(*(thread+(l))) = (void(*)) _beginthreadex(
(void(*)) (NIL),
(int unsigned) (stacksize),
(int unsigned(__cdecl*) (void(*))) (*(fn+(i))),
(void(*)) (*lead).p, // e.g., (*(argp+(i))),
(int unsigned) (createdflags),
(int unsigned(*)) (thread_id+(j++))
);
if(!(*(thread+(l++)))) {
printf("\n%s", ("<< Error at fn. _beginthreadex()."));
// e.g., unmap the rest..
return(char signed) (~(NIL));
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
if(!(Running)) {
break;
}
printf(" ..");
/* **** CPU idling */
Sleep(100);
}




/* **** **** Close/unmap the thread handlers */

printf("\n");

i = (i^(i));

while(l) {
r = (int signed) CloseHandle(*(thread+(--l)));
if(!(r)) {
printf("\n%s", ("<< Error at fn. CloseHandle()."));
// e.g., unmap the rest..
return(char signed) (~(NIL));
}
(i++);
}

// Monitoring
printf("%s%d\n", ("The number of the unmapped thread handlers: "), (i));




/* **** **** Outputting */

printf("\n%s", ("<< Auxiliaries: Outputting"));

cache = (struct knot(*)) (base);
i = (i^(i));

while(cache) {
printf("\n%d%s%s", (i++), (". "), (*cache).p);
cache = (struct knot(*)) (*cache).d;
}

//*/




/* **** **** unmap at */

printf("\n");

j = (j^(j));
i = (i^(i));

while(lead) {
cache = (struct knot(*)) (lead);
lead = (struct knot(*)) (*lead).s;
free((*cache).p);
(j++);
free(cache);
(i++);
// Monitoring
// printf("\r%s%d%s%d", ("The number of the unmapped points: "), (j), (" and "), (i));
}




printf("\n%s", ("All DONE!"));


return(char signed) (NIL);
}
