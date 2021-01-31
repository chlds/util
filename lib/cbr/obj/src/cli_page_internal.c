/* **** Notes

Page n times.

Remarks:
Based on a doubly linked list
*/


# define CBR

# include "../../../incl/config.h"

signed(__cdecl cli_page_internal(cli_spool_t(*argp),signed(n))) {

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!(R(cache,*argp))) return(0x00);
if(n<(0x01)) return(0x00);

if(!(R(d,*(R(cache,*argp))))) return(0x00);
else R(cache,*argp) = (R(d,*(R(cache,*argp))));

return(0x01+(cli_page_internal(argp,--n)));
}
