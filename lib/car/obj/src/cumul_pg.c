/* **** Notes

Cumulate

Remarks:
CLIH_INDEX and CLIH_OFFSET only
Also refer at fn. cumul_va
Refer at fn. unmap_pg
Refer at fn. align_pg and fn. rule_pg
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl cumul_pg(signed(dif),signed(arg),pg_t(*argp))) {
auto pg_t *p;
auto signed r;
if(dif<(0x00)) return(0x00);
if(!arg) return(0x00);
// if(!(arg<(OBJS))) return(0x00);
if(!(arg<(CLIH_DIFF))) return(0x00);
if(!argp) return(0x00);
p = (*(arg+(R(p,*argp))));
if(dif) p = spool_pg(dif,p);
*(arg+(R(p,*argp))) = (p);
arg++;
return(0x01+(cumul_pg(dif,arg,argp)));
}
