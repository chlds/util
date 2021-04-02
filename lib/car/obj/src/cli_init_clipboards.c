/* **** Notes

Initialise clipboards.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cli_init_clipboards(signed(arg),cli_clipboard_t(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *b;
auto signed i,r;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(!(cli_init_pages(&(R(spool,*argp))))) return(0x00);

AND(R(clip,*argp),0x00);
i = (CLI_OBJS);
while(i) {
--i;
AND(*(i+(R(flag,*argp))),0x00);
AND(*(i+(R(size,*argp))),0x00);
*(i+(R(base,*argp))) = (0x00);
}

if(!arg) OR(*(CLI_BASE+(R(flag,*argp))),CLI_INIT);

return(0x01);
}
