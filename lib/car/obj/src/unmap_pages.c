/* **** Notes

Unmap all the pages implemented in a doubly linked list.

Remarks:
Based on a doubly linked list (i.e., not a circular linked list)
Refer at fn. concat_pages and fn. bind_pages.
//*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl unmap_pages(page_t(*argp))) {

auto page_t *page;
auto signed char *p;
auto signed i,r;

if(!argp) return(0x00);

page = (*(CLI_LEAD+(R(page,*argp))));
if(!page) return(0x00);

*(CLI_LEAD+(R(page,*argp))) = (*(CLI_SI+(R(page,*page))));
r = init_pages(0x01,page);
if(!r) {
printf("%s \n","<< Error at fn. init_page()");
return(0x00);
}

rl(page);
page = (0x00);

return(0x01+(unmap_pages(argp)));
}
