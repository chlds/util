/* Notes

Concatenate a page in a circular/doubly linked list

Remarks:
Not insert
On the flag, 0x00 is in a doubly linked list and the others are in a circular linked list
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl catpg_r(signed short(flag),pg_t(*di),pg_t(*si))) {
auto pg_t *p;
if(!di) return(0x00);
if(!si) return(0x00);
p = (di);
p = (*(CLIH_DIFF+(R(p,*p))));
if(!p) *(CLIH_BASE+(R(p,*di))) = (si);
else *(CLIH_DI+(R(p,*p))) = (si);
*(CLIH_SI+(R(p,*si))) = (p);
*(CLIH_DIFF+(R(p,*di))) = (si);
if(!flag/* i.e., in a doubly LL */) *(CLIH_DI+(R(p,*si))) = (0x00);
else {
/* i.e., in a circular LL */
*(CLIH_DI+(R(p,*si))) = (*(CLIH_BASE+(R(p,*di))));
*(CLIH_SI+(R(p,**(CLIH_BASE+(R(p,*di)))))) = (si);
}
return(0x01);
}
