/* **** Notes

Display the privileges to a process.
*/


# define PRIV_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl priv_rrrrr(signed char(**argp))) {

auto signed char **v;
auto signed char *b;
auto signed r;
auto signed short flag;

if(!argp) return(0x00);
if(!(*argp)) {
printf("%s \n","No privilege");
return(0x01);
}

return(priv_rrrrrr(argp));
}
