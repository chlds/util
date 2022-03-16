/* **** Notes

Unmap all the pages implemented in a doubly linked list.

Remarks:
Based on a doubly linked list (i.e., not a circular linked list)
Refer at fn. concat_pages and fn. bind_pages.
//*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl unmap_pages(page_t(*argp))) {

auto page_t *p;
// auto signed r;

if(!argp) return(0x00);

p = (*(CLI_LEAD+(R(page,*argp))));
if(!p) return(0x00);

*(CLI_LEAD+(R(page,*argp))) = (*(CLI_SI+(R(page,*p))));
if(!(init_pages(0x01,p))) {
printf("%s \n","<< Error at fn. init_page()");
return(0x00);
}

rl(p);
p = (0x00);

return(0x01+(unmap_pages(argp)));
}
