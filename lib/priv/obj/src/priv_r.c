/* **** Notes

Display the privileges to a process
*/


# define PRIV_H
# define CAR_H
# define CAW_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl priv_r(signed char(*argp))) {
auto signed char **v;
auto signed char *b;
auto signed r;
auto signed radix = (0x0A);
if(!argp) return(0x00);
b = (argp);
if(!(cv_da(radix,&r,b))) return(0x00);
v = map_ps(r);
if(!v) return(0x00);
r = priv_rr(v);
if(!(unmap_ps(v))) return(0x00);
v = (0x00);
return(r);
}
