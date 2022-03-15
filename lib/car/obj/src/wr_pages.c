/* **** Notes

Write.
//*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl wr_pages(signed(fd),page_t(*argp))) {

auto signed char *b;
auto page_t *p;
auto signed r;

if(fd<(0x00)) return(0x00);
if(!argp) return(0x00);

p = (*(CLI_BASE+(R(page,*argp))));

return(wr_pages_r(fd,p));
}
