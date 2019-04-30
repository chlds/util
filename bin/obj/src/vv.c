/* **** Notes

A program to use a variadic function
*/


# define C_CODE_STDS
# include "./../../../incl/config.h"

signed(__cdecl catvv(signed char(*di), signed char(*si))) {

/* **** CODE/TEXT */
if(!di) return(0x00);
if(!si) return(0x00);

printf("%s\n", si);

si = va_arg(di, signed char*);

return (1+(catvv(di, si)));
}


signed(__cdecl catv(signed char(*argp),...)) {

/* **** DATA, BSS and STACK */
auto signed char(*bp);
auto signed(r);

if(!argp) return(0x00);

va_start(bp, argp);

r = catvv(bp, argp);

va_end(bp);

return(r);
}

/* **** entry point */
signed(__cdecl main(signed(argc), signed char(**argv), signed char(**envp))) {

/* **** DATA, BSS and STACK */
auto signed char(*p0) = ("Sunday morning");
auto signed char(*p1) = ("Monday noon");
auto signed char(*p2) = ("Tuesday afternoon..");
auto signed char(*p3) = (0x00);
auto signed(r);

/* **** CODE/TEXT */
r = catv(p0, p1, p2, p3);

printf("\n");
if(!r) printf("%s\n", "<< Error at fn. catv().");
else printf("%s%d\n", "Count: ", r);

return(0x00);
}
