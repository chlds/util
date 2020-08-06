/* **** Notes

Reconcatenate the lead, index, offset and base pages in a doubly linked list (for general purpose).

Remarks:
Refer at fn. cli_init_pages, fn. cli_concat_pages, fn. cli_bind_pages and fn. cli_unmap_pages.
Based on a doubly linked list (i.e., not a circular linked list)
//*/


# define CBR

# include "../../../incl/config.h"

signed(__cdecl cli_reconcat_pages(signed short(*backward),CLI_SPOOL(*argp))) {

/* **** DATA, BSS and STACK */
auto CLI_PAGE *page;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!backward) return(0x00);
if(!argp) return(0x00);

*backward = (0x00);

flag = (0x00);
page = (*(CLI_INDEX+(R(page,*argp))));

if(!(R(d,*page))) {
if(!(R(s,*page))) {
// stay
*backward = (0x00);
*backward = (~(*backward));
return(0x01);
}
// backward
*(CLI_LEAD+(R(page,*argp))) = (R(s,*page));
*(CLI_INDEX+(R(page,*argp))) = (R(s,*page));
R(d,*(R(s,*page))) = (0x00);
flag++;
*backward = (0x01);
}

if(!(R(s,*page))) {
// rebase
*(CLI_INDEX+(R(page,*argp))) = (R(d,*page));
*(CLI_OFFSET+(R(page,*argp))) = (R(d,*page));
*(CLI_BASE+(R(page,*argp))) = (R(d,*page));
R(s,*(R(d,*page))) = (0x00);
flag++;
}

if(!flag) {
// relay
*(CLI_INDEX+(R(page,*argp))) = (R(d,*page));
R(d,*(R(s,*page))) = (R(d,*page));
R(s,*(R(d,*page))) = (R(s,*page));
}

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
