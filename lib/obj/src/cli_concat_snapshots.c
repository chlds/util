/* **** Notes

Concatenate the lead, index, offset and base snapshots in a doubly linked list (for general purpose).

Remarks:
Refer at fn. cli_init_pages, fn. cli_bind_pages and fn. cli_unmap_pages.
Based on a doubly linked list (i.e., not a circular linked list)
//*/


# define CLI_MACRO

# include "../../../incl/config_ty.h"

signed(__cdecl cli_concat_snapshots(CLI_SNAPSHOT(*cache),CLI_HISTORY(*argp))) {

/* **** DATA, BSS and STACK */
auto signed long long ll;

/* **** CODE/TEXT */
if(!cache) return(0x00);
if(!argp) return(0x00);

ll = (signed long long) (*(CLI_LEAD+(R(snapshot,*argp))));
if(!(ll^((signed long long) *(CLI_INDEX+(R(snapshot,*argp)))))) R(insert,*argp) = (0x00);
else R(insert,*argp) = (0x01);

if(!(R(insert,*argp))) {
if(!(*(CLI_LEAD+(R(snapshot,*argp))))) *(CLI_BASE+(R(snapshot,*argp))) = (cache);
else R(d,**(CLI_LEAD+(R(snapshot,*argp)))) = (cache);
R(s,*cache) = (*(CLI_LEAD+(R(snapshot,*argp))));
*(CLI_LEAD+(R(snapshot,*argp))) = (cache);
R(d,**(CLI_LEAD+(R(snapshot,*argp)))) = (0x00);
// Aux.
*(CLI_OFFSET+(R(snapshot,*argp))) = (*(CLI_BASE+(R(snapshot,*argp))));
*(CLI_INDEX+(R(snapshot,*argp))) = (*(CLI_LEAD+(R(snapshot,*argp))));
}

else {
R(s,*(R(d,**(CLI_INDEX+(R(snapshot,*argp)))))) = (cache);
R(d,*cache) = (R(d,**(CLI_INDEX+(R(snapshot,*argp)))));
R(s,*cache) = (*(CLI_INDEX+(R(snapshot,*argp))));
R(d,**(CLI_INDEX+(R(snapshot,*argp)))) = (cache);
// Aux.
*(CLI_INDEX+(R(snapshot,*argp))) = (cache);
}

return(0x01);
}
