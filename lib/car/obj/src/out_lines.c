/* **** Notes

Output.

Remarks:
A character string should be terminated with the null character.
Refer at fn. cv_ww, fn. read_b and fn. rm_crlf to replace CR/LF with the null character.
Return the number of rows output for characters.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl out_lines(signed short(arg/* align */),signed short(cols),signed char(*sym),signed char(*argp))) {

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

r = out_oneline(arg,cols,sym,argp);
argp = (r+(argp));
if(!r) return(0x00);
// if(!(es(CTRL_K))) return(0x00);

return(0x01+(out_lines_r(arg,cols,sym,argp)));
}
