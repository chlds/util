/* **** Notes

Initialise the lead, index, offset and base pages.

Remarks:
Refer at fn. cli_bind_pages and fn. cli_concat_pages.
Based on a doubly linked list (i.e., not a circular linked list)
//*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cli_init_pages(cli_spool_t(*argp))) {

/* **** DATA, BSS and STACK */
auto signed i,r;

/* **** CODE/TEXT */
if(!argp) return(0x00);

AND(R(insert,*argp),0x00);

i = (CLI_OBJS);
while(i) *(--i+(R(page,*argp))) = (0x00);

return(0x01);
}
