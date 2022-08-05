/* **** Notes

Initialise
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl init_pg(pg_t(*argp))) {
auto signed char *b;
auto pg_t *p;
auto signed r;
if(!argp) return(0x00);
b = (0x00);
p = (0x00);
r = (OBJS);
while(r) *(--r+(R(p,*argp))) = (p);
r = (OBJS);
while(r) *(--r+(R(b,*argp))) = (b);
return(0x01);
}
