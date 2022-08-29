/* **** Notes

Unmap all the pages implemented in a doubly linked list

Remarks:
Refer at fn. cumul_pg
Refer at fn. cat_pg and fn. bind_pg
Based on a doubly linked list (i.e., not a circular linked list)
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl unmap_pg(pg_t(*argp))) {
auto pg_t *p;
if(!argp) return(0x00);
p = (*(CLIH_DIFF+(R(p,*argp))));
if(!p) return(0x00);
*(CLIH_DIFF+(R(p,*argp))) = (*(CLIH_SI+(R(p,*p))));
if(!(init_pg(0x01,p))) {
printf("%s \n","<< Error at fn. init_pg()");
return(0x00);
}
rl(p);
p = (0x00);
return(0x01+(unmap_pg(argp)));
}
