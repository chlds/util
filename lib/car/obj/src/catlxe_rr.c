# define CAR_H
# include "./../../../config.h"

pg_t *(__cdecl catlxe_rr(pg_t(*di),signed char(**si),signed short(flag))) {
auto signed char *b;
auto pg_t *p;
if(!di) return(di);
if(!si) return(di);
if(!(*si)) return(di);
if(!(bindpg(flag,di))) return(di);
b = (*si);
p = (*(CLIH_INDEX+(R(p,*di))));
cat_b(CLIH_BASE+(R(b,*p)),b,(void*)0x00);
si++;
return(catlxe_rr(di,si,flag));
}
