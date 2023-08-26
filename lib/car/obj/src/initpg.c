# define CAR_H
# include "./../../../config.h"

signed(__cdecl initpg(signed(arg),pg_t(*argp))) {
auto signed char **w;
auto signed char *b;
auto pg_t *p;
auto signed r;
if(!argp) return(0x00);
AND(r,0x00);
OR(r,OBJS);
p = (0x00);
while(r) *(--r+(R(p,*argp))) = (p);
w = (R(b,*argp));
OR(r,OBJS);
while(r) {
b = (*(--r+(R(b,*argp))));
if(arg) {
embed(0x00,b);
rl(b);
}
b = (0x00);
*(r+(R(b,*argp))) = (b);
}
return(0x01);
}
