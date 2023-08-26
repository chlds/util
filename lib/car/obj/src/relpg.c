/* **** Notes

Release

Remarks:
Support for a circular linked list
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl relpg(pg_t(*argp))) {
auto pg_t *p;
if(!argp) return(0x00);
p = (*(CLIH_DIFF+(R(p,*argp))));
if(!p) return(0x00);
*(CLIH_DIFF+(R(p,*argp))) = (*(CLIH_SI+(R(p,*p))));
if(EQ(p,(*(CLIH_BASE+(R(p,*argp)))))) *(CLIH_DIFF+(R(p,*argp))) = (0x00);
/* Support for a circular linked list */
if(!(initpg(0x01,p))) return(0x00);
rl(p);
p = (0x00);
return(0x01+(relpg(argp)));
}
