/* **** Notes

Output character lines out of the argument
*/


# define CAR
# include "../../../incl/config.h"
# include <stdio.h>

signed(__cdecl catpp(signed char(**argp))) {

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

printf("%s\n", *argp);

argp++;
return(1+(catpp(argp)));
}
