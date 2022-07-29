/* **** Notes

Display the two-row header.

Remarks:
EOL with CR (0x0D) and LF (0x0A)
*/


# define CBR
# include <stdio.h>
# include <time.h>
# include "../../../incl/config.h"

signed(__cdecl cli_display_header_beta(CLI_TYPEWRITER(*argp))) {

/* **** DATA, BSS and STACK */
auto coord_t coord;
auto signed i,r;
auto signed short flag;
auto signed short y;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(!(es(CTRL_T))) return(0x00);

r = cli_display_header(argp);
if(!r) {
printf("%s \n","<< Error at fn. cli_display_header()");
return(0x00);
}

i = (0x02);
while(i) {
--i;
if(!(es(CTRL_K))) return(0x00);
printf("\r");
printf("\n");
}

r = coord_beta(CLI_IN,CLI_RULE,&coord);
if(!r) {
printf("%s \n","<< Error at fn. coord_beta()");
return(0x00);
}

y = (*(CLI_BASE+(R(y,coord))));
R(y,*(CLI_OFFSET+(R(coord,*argp)))) = (y);
R(y,*(CLI_INDEX+(R(coord,*argp)))) = (y);
R(y,*(CLI_LEAD+(R(coord,*argp)))) = (y);

return(0x01);
}
