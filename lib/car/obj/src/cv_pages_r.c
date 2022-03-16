/* **** Notes

Convert an array of pointers for letters into the page format.

Remarks:
Call fn. unbind_pages later.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl cv_pages_r(page_t(*di),signed char(**si))) {

auto signed char *b;
auto page_t *p;
auto signed r;

if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) return(0x00);

r = bind_pages(0x00,di);
if(!r) return(0x00);

p = (*(CLI_INDEX+(R(page,*di))));
if(!p) return(0x00);

b = (0x00);
if(!(cat_b(&b,*si,(void*)0x00))) return(0x00);

*(CLI_BASE+(R(b,*p))) = (b);
b = (0x00);
si++;

return(0x01+(cv_pages_r(di,si)));
}
