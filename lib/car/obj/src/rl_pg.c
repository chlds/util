/* **** Notes

Unmap out of the RAM

Remarks:
Refer at fn. cv_pg
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl rl_pg(pg_t(**argp))) {
auto pg_t *p;
auto signed r;
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
p = (*argp);
r = unbind_pg(p);
rl(p);
p = (0x00);
*argp = (p);
return(r);
}
