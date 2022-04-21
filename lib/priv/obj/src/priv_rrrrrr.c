/* **** Notes

Display the privileges to a process.
*/


# define PRIV_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl priv_rrrrrr(signed char(**argp))) {

auto signed char **v;
auto signed char *b;
auto signed r;
auto signed short flag;

if(!argp) return(0x00);
if(!(*argp)) return(0x00);

b = (*argp);
argp++;
printf("%s \n",b);

return(0x01+(priv_rrrrrr(argp)));
}
