/*

Output characters based on UTF-8 to the console screen.

Remarks:
Return the number of bytes for output characters (..or the number of output characters).
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_refresh(signed char(*argp))) {

auto signed char *b;
auto coord_t coord;
auto signed i,r;
auto signed short flag;

if(!argp) return(0x00);
if(!(*argp)) return(0x00);

r = coord_beta(CLI_IN,CLI_RULE,&coord);
if(!r) return(0x00);

r = cli_outs(argp);
if(!r) {
printf("%s \n","<< Error at fn. cli_outs()");
return(0x00);
}

r = clear_row(0x01);
if(!r) {
printf("%s \n","<< Error at fn. clear_row()");
return(0x00);
}

r = coord_beta(CLI_OUT,CLI_BASE,&coord);
if(!r) return(0x00);

return(0x01);
}
