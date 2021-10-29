/* **** Notes

Convert an array of letters into the page format.

Remarks:
Call fn. unbind_pages later.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl cv_pv(page_t(*di),signed char(**si))) {

auto signed char *b;
auto page_t *page;
auto signed r;
auto signed short flag;

if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) return(0x00);

flag = (*(CLI_BASE+(R(flag,*di))));
if(!(CLI_INIT&(flag))) return(0x00);

r = cv_pv_r(di,si);
if(!r) return(0x00);

return(r);
}
