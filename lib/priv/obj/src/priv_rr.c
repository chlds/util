/* **** Notes

Display the privileges to a process.
*/


# define PRIV_H
# define CAW_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl priv_rr(void(*argp))) {
auto signed char **v;
auto signed r;
if(!argp) return(0x00);
v = map_ps_token(argp);
if(!v) return(0x00);
r = priv_rrr(v);
if(!(unmap_ps_token(v))) return(0x00);
v = (0x00);
return(r);
}
