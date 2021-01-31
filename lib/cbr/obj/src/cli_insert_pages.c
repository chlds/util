/* **** Notes

Concatenate the lead, index, offset and base pages in a doubly linked list (for general purpose).

Remarks:
Refer at fn. cli_init_pages, fn. cli_bind_pages and fn. cli_unmap_pages.
Based on a doubly linked list (i.e., not a circular linked list)
//*/


# define CBR

# include "../../../incl/config.h"

signed(__cdecl cli_insert_pages(cli_spool_t(*di),cli_spool_t(*si))) {

/* **** DATA, BSS and STACK */
auto cli_page_t *l,*i,*b;
auto signed r;

/* **** CODE/TEXT */
if(!di) return(0x00);
if(!si) return(0x00);

i = (*(CLI_INDEX+(R(page,*di))));
l = R(d,*i);

b = (*(CLI_BASE+(R(page,*si))));
R(d,*i) = (b);
R(s,*b) = (i);

i = (*(CLI_LEAD+(R(page,*si))));
R(d,*i) = (l);
if(l) R(s,*l) = (i);
else *(CLI_LEAD+(R(page,*di))) = (i);

return(0x01);
}
