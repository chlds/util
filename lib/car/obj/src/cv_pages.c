/* **** Notes

Convert an array of pointers for letters into the page format.

Remarks:
Call fn. unbind_pages later.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl cv_pages(page_t(*di),signed char(**si))) {

auto signed char *b;
auto page_t *p;
auto signed r;

if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) return(0x00);

b = (*(CLI_BASE+(R(b,*di))));
if(b) return(0x00);

return(cv_pages_r(di,si));
}
