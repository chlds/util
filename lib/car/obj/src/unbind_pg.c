/* **** Notes

Unmap out of the RAM

Remarks:
Refer at fn. bind_pg
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl unbind_pg(pg_t(*argp))) {
auto pg_t *p;
auto signed r;
if(!argp) return(0x00);
r = unmap_pg(argp);
p = (*(CLIH_DIFF+(R(p,*argp))));
if(p) return(0x00);
if(!(init_pg(0x00,argp))) return(0x00);
return(r);
}
