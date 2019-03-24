/* **** Notes

Factorial

*/



# define C_CODE_STDS

# include "./../../../incl/config.h"



/* **** **** fn. fact() */

int unsigned(__cdecl fact(int unsigned(arg))) {

// To monitor
// printf("%s%d\n", ("The arg is: "), (arg));

if(arg<(2)) return(int unsigned) (1);
else return(int unsigned) (arg*(fact(arg+(~(NIL)))));
}



/* **** **** entry point */

char signed(__cdecl main(char signed(argc), char signed(**argv), char signed(**envp))) {


/* **** **** DATA */

auto const int signed(QUANTUM) = (int signed) (0x10);
auto const int signed(DELAY) = (int signed) (2*(QUANTUM));
// in milli-seconds

auto char signed(*p);

auto int signed(i), (j), (l), (r);
auto char signed(c);


/* **** **** CODE/TEXT */

if(argc<(2)) {
printf("%s\n", ("Please enter a value following the command."));
return(char signed) (NIL);
}

p = (*(argv+(argc+(~(NIL)))));

c = (char signed) cv_lett(&i, (p));

if(!(c^(~(NIL)))) {
printf("%s\n", ("<< Error at fn. cv_lett()."));
return(~(NIL));
}

r = (int unsigned) fact(i);

printf("%d%s%d\n", (i), ("! is: "), (r));

XOR(c, c);
return(char signed) (c);
}
