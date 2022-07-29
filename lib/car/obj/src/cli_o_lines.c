/* **** Notes

Output.

Remarks:
Return the number of rows output for characters.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl cli_o_lines(signed short(cols),signed short(arg/* align */),signed char(*sym),signed char(*argp))) {

auto signed char *b;
auto signed r;
auto signed short flag;

if(cols<(0x01)) return(0x00);
// if(!sym) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
// also
if(arg<(0x01)) arg = (0x08);
if(0x08<(arg)) arg = (0x08);

r = cli_o_line(cols,arg,sym,argp);
argp = (r+(argp));
if(!r) return(0x00);
// if(!(es(CTRL_K))) return(0x00);

return(0x01+(cli_o_lines_r(cols,arg,sym,argp)));
}
