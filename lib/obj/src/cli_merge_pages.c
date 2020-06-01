/* **** Notes

Merge a page to the index page in a doubly linked list (for general purpose).

Remarks:
Refer at fn. cli_init_pages, fn. cli_concat_pages, fn. cli_reconcat_pages, fn. cli_bind_pages and fn. cli_unmap_pages.
Based on a doubly linked list (i.e., not a circular linked list)
//*/


# define CLI_MACRO

# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_merge_pages(CLI_SPOOL(*argp))) {

/* **** DATA, BSS and STACK */
auto CLI_PAGE *page;

auto signed char *p;
auto signed i,r;
auto signed short flag;
auto signed short breaker;

/* **** CODE/TEXT */
if(!argp) return(0x00);

page = R(d,**(CLI_INDEX+(R(page,*argp))));
if(!page) return(0x01);

breaker = (R(linebreak,*page));
R(linebreak,*(R(s,*page))) = (breaker);

if(!(R(d,*page))) {
*(CLI_LEAD+(R(page,*argp))) = (R(s,*page));
R(d,*(R(s,*page))) = (0x00);
}
else {
R(d,*(R(s,*page))) = (R(d,*page));
R(s,*(R(d,*page))) = (R(s,*page));
}

r = ct(*(CLI_BASE+(R(base,*(R(s,*page))))));
i = (r);
r = ct(*(CLI_BASE+(R(base,*page))));
INC(r);
ADD(i,r);
r = (i*(sizeof(signed char)));
p = (signed char(*)) malloc(r);
if(!p) {
printf("%s\n","<< Error at fn. malloc()");
return(0x00);
}
r = concats(p,*(CLI_BASE+(R(base,**(CLI_INDEX+(R(page,*argp)))))),*(CLI_BASE+(R(base,*page))),(void*) 0x00);
if(!r) {
printf("%s\n","<< Error at fn. concats()");
return(0x00);
}
if(*(CLI_BASE+(R(base,*(R(s,*page)))))) {
embed(0x00/* flag */,*(CLI_BASE+(R(base,*(R(s,*page))))));
free(*(CLI_BASE+(R(base,*(R(s,*page))))));
}
*(CLI_BASE+(R(base,*(R(s,*page))))) = (p);

r = cli_unmap_snapshots(&(R(history,*page)));
if(!r) {
printf("%s\n","<< Error at fn. cli_unmap_snapshots()");
return(0x00);
}

r = cli_unmap(CLI_OBJS,R(base,*page));
if(!r) {
printf("%s\n","<< Error at fn. cli_unmap()");
return(0x00);
}

free(page);
page = (0x00);

return(0x01);
}
