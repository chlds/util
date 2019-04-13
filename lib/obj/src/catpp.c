/* **** Notes

Output character lines out of the argument
*/


# include <stdio.h>

signed int(__cdecl catpp(signed char(**argp))) {

/* **** CODE/TEXT */
if(!argp) return(0);
if(!(*argp)) return(0);

printf("%s\n", *argp);

argp++;
return(1+(catpp(argp)));
}
