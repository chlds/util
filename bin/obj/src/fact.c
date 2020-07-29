/* **** Notes

Factorial: Up to 20 */


# define C_CODE_STDS
# include "./../../../lib/incl/config.h"

unsigned long long(__cdecl fact(unsigned(arg))) {

if(arg<(2)) return(1);
return(arg*(fact(arg+(~(NIL)))));
}



/* **** entry point */
signed(__cdecl main(signed(argc), signed char(**argv), signed char(**envp))) {

/* **** DATA, BSS and STACK */
auto unsigned long long(t);
auto signed(d), (r);

/* **** CODE/TEXT */
if(argc<(2)) {
printf("%s\n", ("Please enter a value following the command."));
return(0x00);
}

r = cv2ud(10, &d, *(argv+(argc+(~(NIL)))));
// Convert to unsigned double word.

if(!r) {
printf("%s\n", ("<< Error at fn. cv2uq()."));
return(~(NIL));
}

t = fact(d);

printf("%d%s%llu\n", (d), ("! is: "), (t));

return(0x00);
}
