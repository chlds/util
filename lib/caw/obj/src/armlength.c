# define CAW_H
# define WIN32_H
# include "./../../../config.h"

signed(__cdecl armlength(void(*args),signed char(*argp))) {
auto void *dc;
auto signed r;
auto TEXTMETRIC m;
auto SIZE z;
if(!args) return(0x00);
if(!argp) return(0x00);
AND(r,0x00);
dc = (args);
if(!(GetTextExtentPoint32(dc,argp,ct(argp),&z))) return(r);
if(!(GetTextMetrics(dc,&m))) return(r);
r = (m.tmOverhang);
r = (0x01+(~r));
r = (r+(R(cx,z)));
return(r);
}
