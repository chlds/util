/* **** Notes

Concatenate the lead, index, offset and base pages in a doubly linked list (for general purpose).

Remarks:
Refer at fn. cli_init_pages, fn. cli_bind_pages and fn. cli_unmap_pages.
Based on a doubly linked list (i.e., not a circular linked list)
//*/


# define CLI_MACRO

# include "../../../incl/config_ty.h"

signed(__cdecl cli_insert_pages(CLI_PAGE(*cache),CLI_SPOOL(*argp))) {

/* **** DATA, BSS and STACK */
auto CLI_PAGE *di,*si;
auto signed i,r;

/* **** CODE/TEXT */
if(!cache) return(0x00);
if(!argp) return(0x00);

di = (R(d,*cache));
si = (*(CLI_BASE+(R(page,*argp))));

R(d,*cache) = (si);
R(s,*si) = (cache);

si = (*(CLI_LEAD+(R(page,*argp))));

R(d,*si) = (di);
if(di) R(s,*di) = (si);

return(0x01);
}
