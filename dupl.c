/* **** Notes

dupl [-options] <di> <si>

to duplicate/copy to file <di> out of file <si> in the binary format

*/




/* declaration */

# define C_CODE_STDS
# define C_AS

# include "./incl/decl/config.h"

/*
# ifdef _WIN32
# include <windows.h>
# else
# include <unistd.h>
# endif
//*/

# define BUFF (4096)
# define COUNT_FDS (2)




/* Start-up //*/

char signed(__cdecl main(char signed(argc), char signed(**argv), char signed(**envp))) {

enum {
SI, DI, CACHE
};

auto const int signed(THRESHOLD) = (3);

auto const int signed(DELAY) = (int signed) (25);
// in milli-seconds

auto int signed(fd[COUNT_FDS]) = {
(char signed) (NIL)
};

auto char signed(buff[BUFF]) = {
(char signed) (NIL)
};

auto int signed(i), (j), (l), (r);
auto int signed(count), (total);

auto struct stat(stats);
auto int long long signed(totalfilesize);




/* **** **** **** **** CODE / TEXT */

i = (int signed) (argc);

printf("\n%s%d", ("Count the arguments: "), (i));

if(i<(THRESHOLD)) {
/* Display the help */
printf("\n\n%s", ("<< the arguments ..need three or more to duplicate to <DI> out of <SI> in the binary format."));
printf("\n%s", ("Usage:"));
printf("\n%s", ("dpl [-options] .. <destination_file> <source_file>"));
return(0);
}


/* **** **** Catch the file size */

r = stat(*(argv+(argc+(~(NIL)))), (&stats));

if(!(r^(~(NIL)))) {
printf("\n%s", ("<< Error at fn. stat()."));
return(~(NIL));
}

else {
totalfilesize = (int long long signed) (stats.st_size);
}


/* **** **** Open a file descriptor for reading */

i = (int signed) (i^(i));

(*(fd+(SI))) = (int signed) open(*(argv+(argc+(--i))), (int signed) (O_RDONLY|(O_BINARY)));

r = (*(fd+(SI)));

if(!(r^(~(NIL)))) {
printf("\n%s", ("<< Error at fn. open() at SI."));
return(~(NIL));
}
else {
//* to monitor
printf("\n%s%Xh", ("<< Good! Opened at SI ..and the r is: "), (r));
//*/
}


/* **** **** Open a file descriptor for writing */

(*(fd+(DI))) = (int signed) open(*(argv+(argc+(--i))), (int signed) (O_WRONLY|(O_BINARY|(O_CREAT))), (S_IREAD|(S_IWRITE)));

r = (*(fd+(DI)));

if(!(r^(~(NIL)))) {
printf("\n%s", ("<< Error at fn. open() at DI."));
return(~(NIL));
}
else {
//* to monitor
printf("\n%s%Xh", ("<< Good! Opened at DI ..and the r is: "), (r));
//*/
}




/* **** **** Duplicate */

count = (int signed) (count^(count));
total = (int signed) (total^(total));

r = printf("\n");

while(1) {

/* **** Reading */
r = (int signed) read(*(fd+(SI)), (buff), (BUFF));

count = (int signed) (r);

/* Terminate */
if(!(r)) {
printf("\n\n%s", ("<< Good! All written. (with NIL)"));
break;
}

/* Also */
if(!(r^(EOF))) {
printf("\n\n%s", ("<< Good! All written. (with EOF)"));
break;
}

/* Errors at fn. read() */
if(!(r^(~(NIL)))) {
printf("\n%s", ("<< Error at fn. read()."));
/* Close all the file descriptors */
i = (int signed) (COUNT_FDS);
while(i) {
r = close(*(fd+(--i)));
if(!(r^(~(NIL)))) {
printf("\n%s%d", ("<< Oops, error at fn. close(*(fd+(--i))) ..and the i is: "), (i));
return(char signed) (~(NIL));
}}
return(char signed) (~(NIL));
}

/* **** Writing */
r = (int signed) write(*(fd+(DI)), (buff), (count));

/* Errors at fn. write() */
if(!(r^(~(NIL)))) {
printf("\n%s", ("<< Error at fn. write()."));
/* Close all the file descriptors */
i = (int signed) (COUNT_FDS);
while(i) {
r = close(*(fd+(--i)));
if(!(r^(~(NIL)))) {
printf("\n%s%d", ("<< Oops, error at fn. close(*(fd+(--i))) ..and the i is: "), (i));
return(char signed) (~(NIL));
}}
return(char signed) (~(NIL));
}

total = (int signed) (total+(count));

/* CPU idling */
Sleep(DELAY);

//* To monitor
printf("\r%s%d%s%zd%s", ("Done "), (total), (" bytes per "), (totalfilesize), (" bytes"));
//*/
}




/* **** **** Close all the file descriptors */

i = (int signed) (COUNT_FDS);

while(i) {
r = close(*(fd+(--i)));
if(!(r^(~(NIL)))) {
printf("\n%s%d", ("<< Error at fn. close(*(fd+(--i))) ..and the i is: "), (i));
return(char signed) (~(NIL));
}}




printf("\n%s", ("All done!"));




return(char signed) (NIL);
}
