/* **** Notes

Initialise
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl init_pg(signed(arg),pg_t(*argp))) {
auto signed char **v;
auto pg_t *p;
auto signed r;
if(!argp) return(0x00);
AND(r,0x00);
OR(r,OBJS);
p = (0x00);
while(r) *(--r+(R(p,*argp))) = (p);
v = (R(b,*argp));
r = init_va(arg,OBJS,v);
if(!(EQ(OBJS,r))) return(0x00);
return(0x01);
}
