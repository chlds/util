/* **** Notes

Initialise

Remarks:
Refer at fn. cli_restore.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl init_pages(signed(arg),page_t(*argp))) {

auto signed char *b;
auto page_t *page;
auto signed r;
auto signed short flag;

if(!argp) return(0x00);

// initialise
flag = (*(CLI_BASE+(R(flag,*argp))));
if(!(CLI_INIT&(flag))) AND(arg,0x00);

// destroy
if(arg) {
AND(arg,0x00);
b = (*(CLI_BASE+(R(b,*argp))));
embed(0x00,b);
if(b) rl(b);
}

AND(flag,0x00);
page = (0x00);
b = (0x00);
r = (OBJS);
while(r) *(--r+(R(b,*argp))) = (b);
r = (PAGES);
while(r) *(--r+(R(page,*argp))) = (page);
r = (FLAGS);
while(r) *(--r+(R(flag,*argp))) = (flag);

AND(r,0x00);
OR(*(CLI_BASE+(R(flag,*argp))),CLI_INIT);
OR(r,0x01);

return(r);
}
