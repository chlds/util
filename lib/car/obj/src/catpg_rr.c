/* Notes

Concatenate a page to be inserted in a circular/doubly linked list

Remarks:
Insert
On the flag, 0x00 is in a doubly linked list and the others are in a circular linked list
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl catpg_rr(signed short(flag),pg_t(*di),pg_t(*si))) {
auto pg_t *p;
if(!di) return(0x00);
if(!si) return(0x00);
p = (di);
p = (*(CLIH_INDEX+(R(p,*p))));
*(CLIH_SI+(R(p,**(CLIH_DI+(R(p,*p)))))) = (si);
*(CLIH_DI+(R(p,*si))) = (*(CLIH_DI+(R(p,*p))));
*(CLIH_SI+(R(p,*si))) = (p);
*(CLIH_DI+(R(p,*p))) = (si);
return(0x01);
}
