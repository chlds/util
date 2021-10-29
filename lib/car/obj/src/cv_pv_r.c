/* **** Notes

Convert an array of letters into the page format.

Remarks:
Call fn. unbind_pages later.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl cv_pv_r(page_t(*di),signed char(**si))) {

auto signed char *b;
auto page_t *page;
auto signed r;
auto signed short flag;

if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) {
page = (*(CLI_INDEX+(R(page,*di))));
if(!page) return(0x00);
OR(*(CLI_BASE+(R(flag,*page))),CLI_BR);
return(0x00);
}

flag = (*(CLI_BASE+(R(flag,*di))));
if(!(CLI_INIT&(flag))) return(0x00);

r = bind_pages(0x00,di);
if(!r) return(0x00);

page = (*(CLI_INDEX+(R(page,*di))));
if(!page) return(0x00);

b = (0x00);
r = cat_b(&b,*si,(void*) 0x00);
if(!r) return(0x00);

*(CLI_BASE+(R(b,*page))) = (b);
b = (0x00);
si++;

return(0x01+(cv_pv_r(di,si)));
}
