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
p = (argp);
if(!(cfmppg(p))) return(0x00);
r = unbindpg_r(p);
if(!r) return(0x00);
if(!(initpg(0x00,p))) return(0x00);
return(r);
}
