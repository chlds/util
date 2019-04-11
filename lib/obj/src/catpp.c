/* **** Notes

Output character lines out of the argument

*/


# include "./../../../incl/config.h"

int signed(__cdecl catpp(char signed(**argp))) {

/* **** CODE/TEXT */
if(!argp) return(0);
if(!(*argp)) return(0);

printf("%s\n", *argp);

argp++;
return(1+(catpp(argp)));
}
