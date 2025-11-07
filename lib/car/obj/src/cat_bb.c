# define CAR_H
# include "./../../../config.h"

signed(__cdecl cat_bb(signed char(**di),signed char(si))) {
auto signed char *b;
auto signed r;
if(!di) return(0x00);
r = ct(*di);
r++;
b = (signed char*)(alloc(++r*(sizeof(**di))));
if(!b) return(0x00);
*b = (0x00);
r = cpy(b,*di);
embed(0x00,*di);
rl(*di);
*di = (b);
b = (r+(b));
*b = (si);
r++;
b++;
*b = (0x00);
b = (0x00);
return(r);
}
