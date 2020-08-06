/* **** Notes

Page n times.

Remarks:
Based on a doubly linked list
Refer at fn. cli_output_pages_beta.
*/


# define CBR

# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_page(CLI_PAGE(**di),CLI_SPOOL(*argp),CLI_PAGE(*si),signed(n))) {

/* **** DATA, BSS and STACK */
auto signed r;

/* **** CODE/TEXT */
if(!di) return(0x00);
if(!argp) return(0x00);
if(!si) return(0x00);
if(n<(0x01)) return(0x00);

R(cache,*argp) = (si);

r = cli_page_internal(argp,n);
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cli_page_internal()");
return(0x00);
//*/
}

*di = (R(cache,*argp));

return(r);
}
