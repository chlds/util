/* Notes

Concatenate a page in a circular or doubly linked list

Remarks:
Refer at fn. relpg and fn. unbindpg
On the flag, 0x00 is in a doubly linked list and the others are in a circular linked list
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl catpg(signed short(flag),pg_t(*di),pg_t(*si))) {
auto pg_t *p;
auto signed r;
auto signed(__cdecl**ff)(signed short(flag),pg_t(*di),pg_t(*si));
auto signed(__cdecl*f)(signed short(flag),pg_t(*di),pg_t(*si));
auto signed(__cdecl*(fn[]))(signed short(flag),pg_t(*di),pg_t(*si)) = {
catpg_rr, // insert
catpg_r, // not insert
0x00,
};
if(!di) return(0x00);
if(!si) return(0x00);
p = (di);
if(!(cfmppg(p))) return(0x00);
ff = (fn);
p = (*(CLIH_DIFF+(R(p,*p))));
if(EQ(p,*(CLIH_INDEX+(R(p,*di))))) ff++;
f = (*ff);
if(!f) return(0x00);
r = f(flag,di,si);
// *(CLIH_OFFSET+(R(p,*di))) = (*(CLIH_BASE+(R(p,*di))));
*(CLIH_OFFSET+(R(p,*di))) = (si);
*(CLIH_INDEX+(R(p,*di))) = (si);
return(r);
}
