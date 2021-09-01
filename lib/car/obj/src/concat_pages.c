/* **** Notes

Concatenate a page in a circular/doubly linked list.

Remarks:
On the flag, 0x00 is in a doubly linked list and the others are in a circular linked list.
Refer at fn. unmap_pages and fn. unbind_pages.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl concat_pages(signed short(flag),page_t(*di),page_t(*si))) {

auto signed char *b;
auto page_t *page;
auto signed insert;
auto signed r;

if(!di) return(0x00);
if(!si) return(0x00);

b = (*(CLI_BASE+(R(b,*di))));
if(b) return(0x00);

AND(insert,0x00);
page = (*(CLI_LEAD+(R(page,*di))));
if(!(EQ(page,*(CLI_INDEX+(R(page,*di)))))) OR(insert,0x01);

if(!insert) {
if(!page) *(CLI_BASE+(R(page,*di))) = (si);
else *(CLI_DI+(R(page,*page))) = (si);
*(CLI_SI+(R(page,*si))) = (page);
*(CLI_LEAD+(R(page,*di))) = (si);
if(!flag/* i.e., in a doubly LL */) *(CLI_DI+(R(page,**(CLI_LEAD+(R(page,*di)))))) = (0x00);
else {
/* i.e., in a circular LL */
*(CLI_DI+(R(page,**(CLI_LEAD+(R(page,*di)))))) = (*(CLI_BASE+(R(page,*di))));
*(CLI_SI+(R(page,**(CLI_BASE+(R(page,*di)))))) = (*(CLI_LEAD+(R(page,*di))));
}
// Aux.
*(CLI_OFFSET+(R(page,*di))) = (*(CLI_BASE+(R(page,*di))));
*(CLI_INDEX+(R(page,*di))) = (*(CLI_LEAD+(R(page,*di))));
}

else {
*(CLI_SI+(R(page,**(CLI_DI+(R(page,**(CLI_INDEX+(R(page,*di))))))))) = (si);
*(CLI_DI+(R(page,*si))) = (*(CLI_DI+(R(page,**(CLI_INDEX+(R(page,*di)))))));
*(CLI_SI+(R(page,*si))) = (*(CLI_INDEX+(R(page,*di))));
*(CLI_DI+(R(page,**(CLI_INDEX+(R(page,*di)))))) = (si);
// Aux.
*(CLI_INDEX+(R(page,*di))) = (si);
}

return(0x01);
}
