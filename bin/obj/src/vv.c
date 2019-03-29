/* **** Notes

A program to use a variadic function

*/


# define C_CODE_STDS
# include "./../../../incl/config.h"


char signed(__cdecl catvv(char signed(*di), char signed(*si))) {

if(!di) return(NIL);
if(!si) return(NIL);

/* Monitor
printf("%s%p\n", ("di is: "), (di));
printf("%s%p\n", ("si is: "), (si));
printf("%s%s\n", ("si is: "), (si));
//*/

printf("%s\n", (si));

si = va_arg(di, char signed*);

return (1+(catvv(di, (si))));
}


char signed(__cdecl catv(char signed(*argp),...)) {

auto char signed(*sp);
auto char signed(c);

if(!argp) return(NIL);

va_start(sp, argp);

c = catvv(sp, argp);

va_end(sp);

return(c);
}



/* **** **** entry point */

char signed(__cdecl main(char signed(argc), char signed(**argv), char signed(**envp))) {

/* **** **** DATA
auto int signed const(QUANTUM) = (0x10);
auto int signed const(SNOOZE) = (0x08);
auto int signed const(DELAY) = (0x02*(QUANTUM));
//*/

auto char signed(*p0) = (char signed(*)) ("Sunday morning");
auto char signed(*p1) = (char signed(*)) ("Monday noon");
auto char signed(*p2) = (char signed(*)) ("Tuesday afternoon");
auto char signed(*p3) = (char signed(*)) ("...");

auto char signed(c);

/* **** **** CODE/TEXT */
c = (char signed) catv(p0, p1, p2, p3, (NIL));

printf("\n");
printf("%s%d\n", ("Count: "), (c));

return(char signed) (XOR(c, c));
}
