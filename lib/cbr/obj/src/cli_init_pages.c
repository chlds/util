/* **** Notes

Initialise the lead, base and temporary pages.

Remarks:
Refer at fn. cli_bind_pages and fn. cli_concat_pages.
Based on a doubly linked list (i.e., not a circular linked list)
//*/


# define CLI_MACRO

# include "../../../incl/config_ty.h"

signed(__cdecl cli_init_pages(CLI_SPOOL(*argp))) {

/* **** DATA, BSS and STACK */
auto signed i,r;

/* **** CODE/TEXT */
if(!argp) return(0x00);

R(redo,*argp) = (0x00);
R(undo,*argp) = (0x00);
R(insert,*argp) = (0x00);

i = (CLI_OBJS);
while(i) {
*(--i+(R(page,*argp))) = (0x00);
}

return(0x01);
}
