/* **** Notes

Spool
*/


# define CAR_H
# include "./../../../config.h"

pg_t *(__cdecl spool_pg(signed(arg),pg_t(*argp))) {
auto signed r;
auto pg_t *p;
if(arg<(0x00)) return(0x00);
if(!argp) return(0x00);
if(!arg) return(argp);
p = (0x00);
r = spool_pg_r(arg,&p,argp);
if(!(EQ(arg,r))) p = (0x00);
return(p);
}
