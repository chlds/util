/* **** Notes

Search pages out of the index page to find characters.

Remarks:
Based on a doubly linked list
*/


# define CLI_MACRO

# include "../../../incl/config_ty.h"

signed(__cdecl cli_search_pages(CLI_TYPEWRITER(*argp))) {

/* **** DATA, BSS and STACK */
auto CLI_PAGE *page;

auto signed char *cur,*base,*p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

*(CLI_OUT+(R(cur,R(search,*argp)))) = (*(CLI_INDEX+(R(cur,*argp))));
*(CLI_IN+(R(cur,R(search,*argp)))) = (*(CLI_INDEX+(R(base,R(roll,*argp)))));
R(offset,R(search,*argp)) = (0x00);
R(flag,R(search,*argp)) = (0x00);
R(cache,R(spool,*argp)) = (*(CLI_INDEX+(R(page,R(spool,*argp)))));

r = cli_search_pages_internal(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_search_pages_internal()");
return(0x00);
}

if(!(0x01^(r))) ADD(R(offset,R(search,*argp)),R(offset,*argp));

return(r);
}
