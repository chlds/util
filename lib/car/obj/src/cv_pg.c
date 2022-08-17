/* **** Notes

Convert
*/


# define CAR_H
# include "./../../../config.h"

pg_t *(__cdecl cv_pg(signed(arg),signed char(*sym),pg_t(*argp))) {
auto signed char *b;
auto pg_t *p;
auto signed r;
if(!argp) return(0x00);
b = (*(CLI_B+(R(b,*argp))));
if(!b) return(0x00);
r = (0x01*(sizeof(*p)));
p = (pg_t*) alloc(r);
if(!p) return(0x00);
r = cv_pg_r(arg,sym,p,argp);
if(!r) {
unbind_pg(p);
p = (0x00);
}
return(p);
}
