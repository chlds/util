/* **** Notes

Read.
//*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl rd_pages(signed(fd),page_t(*argp))) {

auto signed char *b;
auto page_t *p;
auto signed r;

if(fd<(0x00)) return(0x00);
if(!argp) return(0x00);

b = (*(CLI_BASE+(R(b,*argp))));
if(b) return(0x00);

return(rd_pages_r(fd,argp));
}
