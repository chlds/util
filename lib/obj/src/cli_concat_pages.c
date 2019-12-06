/* **** Notes

Concatenate the lead, base and temporary pages in a doubly linked list (for general purpose).

Remarks:
Refer at fn. cli_bind_pages.
Based on a doubly linked list (i.e., not a circular linked list)
//*/


# define R(D,S) (S).D
// A local macro function

# include "../../../incl/cli.h"

signed(__cdecl cli_concat_pages(CLI_PAGE(*cache),CLI_SPOOL(*argp))) {

/* **** CODE/TEXT */
if(!cache) return(0x00);
if(!argp) return(0x00);

if(!(R(l,*argp))) R(b,*argp) = (cache);
else R(d,*(R(l,*argp))) = (cache);

R(s,*cache) = R(l,*argp);
R(l,*argp) = (cache);
R(d,*(R(l,*argp))) = (0x00);

return(0x01);
}
