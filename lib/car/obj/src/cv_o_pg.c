/* **** Notes

Convert

Remarks:
Refer at fn. rl_pg
*/


# define CAR_H
# include "./../../../config.h"

pg_t *(__cdecl cv_o_pg(signed(arg/* colm */),pg_t(*argp))) {
auto signed char *b;
auto pg_t *p;
auto signed r;
if(arg<(0x01)) return(0x00);
if(!argp) return(0x00);
b = (*(CLI_B+(R(b,*argp))));
if(!b) return(0x00);
r = (0x01*(sizeof(*p)));
p = (pg_t*) alloc(r);
if(!p) return(0x00);
r = cv_o_pg_r(arg,p,argp);
if(!r) {
rl(p);
p = (0x00);
}
return(p);
}
