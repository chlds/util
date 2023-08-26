/* **** Notes

Unmap out of the RAM

Remarks:
Refer at fn. bindpg
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl unbindpg(pg_t(*argp))) {
auto pg_t *p;
auto signed r;
if(!argp) return(0x00);
r = relpg(argp);
p = (*(CLIH_DIFF+(R(p,*argp))));
if(p) return(0x00);
if(!(initpg(0x00,argp))) return(0x00);
return(r);
}
