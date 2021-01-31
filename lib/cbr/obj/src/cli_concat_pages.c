/* **** Notes

Concatenate the lead, index, offset and base pages in a doubly linked list (for general purpose).

Remarks:
Refer at fn. cli_init_pages, fn. cli_bind_pages and fn. cli_unmap_pages.
Based on a doubly linked list (i.e., not a circular linked list)
//*/


# define CBR

# include "../../../incl/config.h"

signed(__cdecl cli_concat_pages(cli_page_t(*cache),cli_spool_t(*argp))) {

/* **** DATA, BSS and STACK */
auto cli_page_t *page;

/* **** CODE/TEXT */
if(!cache) return(0x00);
if(!argp) return(0x00);

page = (*(CLI_LEAD+(R(page,*argp))));
if(EQ(page,*(CLI_INDEX+(R(page,*argp))))) R(insert,*argp) = (0x00);
else R(insert,*argp) = (0x01);

if(!(R(insert,*argp))) {
if(!(*(CLI_LEAD+(R(page,*argp))))) *(CLI_BASE+(R(page,*argp))) = (cache);
else R(d,**(CLI_LEAD+(R(page,*argp)))) = (cache);
R(s,*cache) = (*(CLI_LEAD+(R(page,*argp))));
*(CLI_LEAD+(R(page,*argp))) = (cache);
R(d,**(CLI_LEAD+(R(page,*argp)))) = (0x00);
// Aux.
*(CLI_OFFSET+(R(page,*argp))) = (*(CLI_BASE+(R(page,*argp))));
*(CLI_INDEX+(R(page,*argp))) = (*(CLI_LEAD+(R(page,*argp))));
}

else {
R(s,*(R(d,**(CLI_INDEX+(R(page,*argp)))))) = (cache);
R(d,*cache) = (R(d,**(CLI_INDEX+(R(page,*argp)))));
R(s,*cache) = (*(CLI_INDEX+(R(page,*argp))));
R(d,**(CLI_INDEX+(R(page,*argp)))) = (cache);
// Aux.
*(CLI_INDEX+(R(page,*argp))) = (cache);
}

return(0x01);
}
