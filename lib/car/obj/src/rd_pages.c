/* **** Notes

Read.
//*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl rd_pages(page_t(*argp),signed(fd))) {

auto signed char *b;
auto page_t *page;
auto signed i,r;
auto signed short flag;

if(!argp) return(0x00);
if(fd<(0x00)) return(0x00);

flag = (*(CLI_BASE+(R(flag,*argp))));
if(!(CLI_INIT&(flag))) return(0x00);

return(rd_pages_r(argp,fd));
}
