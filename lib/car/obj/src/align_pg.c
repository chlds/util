/* **** Notes

Align

Remarks:
Refer at fn. cumul_pg and fn. rule_pg
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl align_pg(pg_t(*argp))) {
auto pg_t *p;
auto signed r;
if(!argp) return(0x00);
AND(r,0x00);
OR(r,OBJS);
p = (*(CLIH_BASE+(R(p,*argp))));
if(!p) return(0x00);
while(r) *(--r+(R(p,*argp))) = (p);
return(0x01);
}
