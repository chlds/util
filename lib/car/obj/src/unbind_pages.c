/* **** Notes

Unmap out of the RAM

Remarks:
Refer at fn. bind_pages.
//*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl unbind_pages(page_t(*argp))) {

auto page_t *page;
auto signed r;
auto signed short flag;

if(!argp) return(0x00);

flag = (*(CLI_BASE+(R(flag,*argp))));
if(!(CLI_INIT&(flag))) return(0x00);

r = unmap_pages(argp);

page = (*(CLI_LEAD+(R(page,*argp))));
if(page) return(0x00);

if(!(init_pages(0x01,argp))) return(0x00);

return(r);
}
