/* **** Notes

Arrange.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl arr_dir(signed char(**di),signed char(*si))) {

auto signed char *b;
auto signed r;
auto signed char slash = ('/');
auto signed char asterisk = ('*');

if(!di) return(0x00);
if(*di) return(0x00);
if(!si) return(0x00);

AND(r,0x00);
b = (si);
b = (b+(ct(b)));
if(asterisk^(*(--b))) {
if(slash^(*(--b))) r++;
r++;
}

r = (r+(ct(si)));
r++;
r = (r*(sizeof(*b)));
b = (signed char(*)) alloc(r);
*di = (b);
if(!b) return(0x00);

r = cpy(b,si);
if(asterisk^(*(b+(r+(~0x00))))) {
if(slash^(*(b+(r+(~0x00))))) *(b+(r++)) = (slash);
*(b+(r++)) = (asterisk);
*(b+(r)) = (0x00);
}

b = (0x00);

return(ct(*di));
}
