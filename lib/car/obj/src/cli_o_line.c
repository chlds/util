/* **** Notes

Output only one line.

Remarks:
Return the number of bytes output for characters.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl cli_o_line(signed short(cols),signed short(arg/* align */),signed char(*sym),signed char(*argp))) {

auto signed char **v;
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

v = (0x00);
r = cv_va(&v,sym,argp);
if(!r) return(0x00);

r = wrap_va(cols,arg,v);
if(!r) {
rl_v(&v);
if(cols<(ct(argp))) return(cli_o_line_limited(cols,arg,argp));
return(0x00);
}

r = cli_o_line_r(cols,arg,v);
rl_v(&v);

return(r);
}
