/* **** Notes

Count pages of structure CLI_PAGE.

Remarks:
Based on a doubly linked list
*/


# define CBR

# include "../../../incl/config.h"

signed(__cdecl cli_count_pages(CLI_PAGE(*argp))) {

/* **** CODE/TEXT */
if(!argp) return(0x00);

argp = (R(d,*argp));

return(0x01+(cli_count_pages(argp)));
}
