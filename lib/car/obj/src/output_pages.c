/* **** Notes

Output.

Remarks:
Refer at fn. cv_ww, cv_v and rl_v.
Based on UTF-8
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl output_pages(signed short(arg/* align */),page_t(*argp))) {

auto signed char *b;
auto page_t *page;
auto signed r;
auto signed short flag;

if(!argp) return(0x00);

if(arg<(0x00)) arg = (0x08);
if(!(arg<(0x08))) arg = (0x08);

page = (*(CLI_BASE+(R(page,*argp))));

return(output_pages_r(arg,page));
}
