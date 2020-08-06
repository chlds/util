/* **** Notes

Search pages out of the index page to find characters.

Remarks:
Based on a doubly linked list
*/


# define CBR

# include "../../../incl/config.h"

signed(__cdecl cli_search_pages(CLI_TYPEWRITER(*argp))) {

/* **** DATA, BSS and STACK */
auto CLI_PAGE *page;

auto signed char *cur,*base,*p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

R(cache,R(spool,*argp)) = (*(CLI_INDEX+(R(page,R(spool,*argp)))));
R(offset,R(search,*argp)) = (0x00);
R(flag,R(search,*argp)) = (0x00);
*(CLI_IN+(R(cur,R(search,*argp)))) = (*(CLI_LEAD+(R(base,R(roll,*argp)))));
r = (R(offset,*argp));
*(CLI_OUT+(R(cur,R(search,*argp)))) = (r+(*(CLI_BASE+(R(base,*(R(cache,R(spool,*argp))))))));

if(CL_SEARCH&(R(flag,*argp))) {
p = (*(CLI_OUT+(R(cur,R(search,*argp)))));
if(*p) p++;
*(CLI_OUT+(R(cur,R(search,*argp)))) = (p);
}

r = cli_search_pages_internal(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_search_pages_internal()");
return(0x00);
}

return(r);
}
