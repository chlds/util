/* **** Notes

Display the two-row header.

Remarks:
EOL with CR (0x0D) and LF (0x0A)
Along with C library
*/


# define CBR
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include "../../../incl/config.h"

signed(__cdecl cli_display_header_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto CLI_COORD coord;

auto signed i,r;
auto signed short flag;
auto signed short y;

/* **** CODE/TEXT */
if(!argp) return(0x00);

coord.y = (0x00);
coord.x = (0x00);
r = cli_coord_beta(CLI_OUT,&coord,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

r = cli_display_header(&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_display_header()");
return(0x00);
}

i = (0x02);
while(i) {
--i;
r = cli_clear_row_beta(0x00/* comeback */,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_clear_row_beta()");
return(0x00);
}}

r = cli_coord_beta(CLI_IN,&coord,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

y = (coord.y);
R(y,*(CLI_OFFSET+(R(coord,R(ty,*argp))))) = (y);
R(y,*(CLI_INDEX+(R(coord,R(ty,*argp))))) = (y);
R(y,*(CLI_LEAD+(R(coord,R(ty,*argp))))) = (y);

return(0x01);
}