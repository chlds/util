/* **** Notes

Count

Remarks:
Support for a circular linked list
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cntpg(pg_t(*argp))) {
auto pg_t *p;
if(!argp) return(0x00);
p = (argp);
if(!(cfmppg(p))) return(0x00);
p = (*(CLIH_BASE+(R(p,*p))));
return(cntpg_r(*(CLIH_DIFF+(R(p,*argp))),p));
}
