/* **** Notes

Display the privileges to a process.
*/


# define PRIV_H
# define CAR_H
# define CAW_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl priv_rrr(void(*argp))) {
auto void *v;
auto signed r;
if(!argp) return(0x00);
v = (0x00);
r = currently_granting_token_privileges(&v,argp);
if(!r) return(0x00);
r = priv_rrrr(v);
if(!(rl(v))) return(0x00);
return(r);
}
