/* **** Notes

Output only one line.

Remarks:
Return the number of bytes output for characters.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl out_oneline(signed short(arg/* align */),signed short(cols),signed char(*sym),signed char(*argp))) {

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
r = cv_wo(&v,sym,argp);
if(!r) return(0x00);

r = wrap(cols,v);
if(!r) {
rl_v(&v);
return(0x00);
}

r = out_oneline_r(r,arg,v);
if(!r) {
rl_v(&v);
return(0x00);
}

rl_v(&v);

return(r);
}
