/* **** Notes

Convert

Remarks:
Refer at fn. rl_pg
*/


# define CAR_H
# include "./../../../config.h"

pg_t *(__cdecl cv_pa(signed(arg),signed char(*sym),signed char(*argp))) {
auto signed char *b;
auto pg_t *p;
auto signed r;
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
r = (0x01*(sizeof(*p)));
p = (pg_t*) alloc(r);
if(!p) return(0x00);
r = cv_pa_r(arg,sym,p,argp);
if(!r) {
rl(p);
p = (0x00);
}
return(p);
}
