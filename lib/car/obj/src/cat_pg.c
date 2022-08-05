/* **** Notes

Concatenate a page in a circular/doubly linked list

Remarks:
Refer at fn. unmap_pg and fn. unbind_pg
On the flag, 0x00 is in a doubly linked list and the others are in a circular linked list
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cat_pg(signed short(flag),pg_t(*di),pg_t(*si))) {
auto signed char *b;
auto pg_t *p;
auto signed insert;
auto signed r;
if(!di) return(0x00);
if(!si) return(0x00);
AND(insert,0x00);
p = (di);
b = (*(CLIH_BASE+(R(b,*p))));
if(b) return(0x00);
p = (*(CLIH_DIFF+(R(p,*p))));
if(!(EQ(p,*(CLIH_INDEX+(R(p,*di)))))) OR(insert,0x01);
if(!insert) {
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
// Aux.
*(CLIH_OFFSET+(R(p,*di))) = (*(CLIH_BASE+(R(p,*di))));
*(CLIH_INDEX+(R(p,*di))) = (si);
}
else {
// insert
*(CLIH_SI+(R(p,**(CLIH_DI+(R(p,**(CLIH_INDEX+(R(p,*di))))))))) = (si);
*(CLIH_DI+(R(p,*si))) = (*(CLIH_DI+(R(p,**(CLIH_INDEX+(R(p,*di)))))));
*(CLIH_SI+(R(p,*si))) = (*(CLIH_INDEX+(R(p,*di))));
*(CLIH_DI+(R(p,**(CLIH_INDEX+(R(p,*di)))))) = (si);
// Aux.
*(CLIH_INDEX+(R(p,*di))) = (si);
}
return(0x01);
}
