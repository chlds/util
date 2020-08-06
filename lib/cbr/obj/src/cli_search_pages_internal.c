/* **** Notes

Search pages out of the index page to find characters.

Remarks:
Based on a doubly linked list
*/


# define CBR

# include "../../../incl/config.h"

signed(__cdecl cli_search_pages_internal(CLI_TYPEWRITER(*argp))) {

/* **** DATA, BSS and STACK */
auto CLI_PAGE *page;

auto signed char *cur,*base,*p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!(*(CLI_OUT+(R(cur,R(search,*argp)))))) return(0x00);
if(!(*(CLI_IN+(R(cur,R(search,*argp)))))) return(0x00);
if(!(R(cache,R(spool,*argp)))) return(0x00);

cur = (*(CLI_OUT+(R(cur,R(search,*argp)))));
i = (0x00);

while(0x01) {
if(!(*cur)) break;
r = cmpr_partially(&i,cur,*(CLI_IN+(R(cur,R(search,*argp)))));
if(!r) {
printf("%s\n","<< Error at fn. cmpr_partially()");
return(0x00);
}
if(!i) {
r = compare(cur,*(CLI_BASE+(R(base,*(R(cache,R(spool,*argp)))))));
R(offset,R(search,*argp)) = (r);
R(flag,R(search,*argp)) = (0x01);
return(0x01);
}
cur++;
}

R(cache,R(spool,*argp)) = (R(d,*(R(cache,R(spool,*argp)))));
if(!(R(cache,R(spool,*argp)))) return(0x01);

*(CLI_OUT+(R(cur,R(search,*argp)))) = (*(CLI_BASE+(R(base,*(R(cache,R(spool,*argp)))))));

return(0x01+(cli_search_pages_internal(argp)));
}
