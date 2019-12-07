/* **** Notes

Initialise the lead, base and temporary pages.

Remarks:
Based on a doubly linked list (i.e., not a circular linked list)
//*/


# define R(D,S) (S).D
// A local macro function

# include "../../../incl/cli.h"

signed(__cdecl cli_init_pages(CLI_SPOOL(*argp))) {

/* **** CODE/TEXT */
if(!argp) return(0x00);

*(CLI_BASE+(R(page,*argp))) = (0x00);
*(CLI_OFFSET+(R(page,*argp))) = (0x00);
*(CLI_INDEX+(R(page,*argp))) = (0x00);
*(CLI_LEAD+(R(page,*argp))) = (0x00);

return(0x01);
}
