/* **** Notes

Output character lines
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl catpp(signed char(**argp))) {
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
printf("%s\n",*argp);
argp++;
return(0x01+(catpp(argp)));
}
