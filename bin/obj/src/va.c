/* **** Notes

A program to use a variadic function
*/


# define C_CODE_STDS
# include "./../../../incl/config.h"

signed(__cdecl cnct(char signed(*argp), ...)) {

/* **** DATA, BSS and STACK */
auto va_list(bp);
auto signed char(*p);
auto signed(i);

if(!argp) return(0x00);
i = (i^(i));

p = (argp);
va_start(bp, argp);

while(p) {
printf("%s", p);
i++;
p = va_arg(bp, void*);
}

va_end(bp); // unmapping a buffer on the RAM

return(i);
}

/* **** entry point */
signed(__cdecl main(signed(argc), signed char(**argv), signed char(**envp))) {

/* **** DATA, BSS and STACK */
auto signed char(*p0) = ("A");
auto signed char(*p1) = (" ");
auto signed char(*p2) = ("sunny day");
auto signed char(*p3) = (0x00);
auto signed(r);

/* **** CODE/TEXT */
r = cnct(p0, p1, p2, p3);

printf("\n");
if(!r) printf("%s\n", ("<< Error at fn. cnct()."));
else printf("%s%d%s\n", "Concatenated ", r, " strings.");

return(0x00);
}
