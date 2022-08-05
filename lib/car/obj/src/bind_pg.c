/* **** Notes

Concatenate pages after allocating a memory block for structure pg_t

Remarks:
Refer at fn. unbind_pg
Build a doubly linked list
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl bind_pg(pg_t(*argp))) {
auto signed char *b;
auto pg_t *p;
auto signed r;
if(!argp) return(0x00);
b = (*(CLIH_BASE+(R(b,*argp))));
if(b) return(0x00);
r = (0x01*(sizeof(*p)));
p = (pg_t*) alloc(r);
if(!p) {
printf("%s \n","<< Error at fn. alloc()");
return(0x00);
}
r = bind_pg_r(argp,p);
if(!r) {
printf("%s \n","<< Error at fn. bind_pg_r()");
rl(p);
p = (0x00);
}
return(r);
}
