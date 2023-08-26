/* **** Notes

Bind pages after allocating a memory block for structure pg_t

Remarks:
Build a circular or doubly linked list
Refer at fn. unbindpg
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl bindpg(signed short(flag),pg_t(*argp))) {
auto pg_t *p;
auto signed r;
if(!argp) return(0x00);
p = (argp);
if(!(cfmppg(p))) return(0x00);
r = (0x01*(sizeof(*p)));
p = (pg_t*) alloc(r);
if(!p) return(0x00);
r = bindpg_r(flag,argp,p);
if(!r) {
rl(p);
p = (0x00);
}
return(r);
}
