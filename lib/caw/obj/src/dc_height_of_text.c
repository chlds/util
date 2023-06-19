# define CAW_H
# define CAR_H
# define WIN32_H
# include "./../../../config.h"

signed(__cdecl dc_height_of_text(void(*dc),signed char(*argp))) {
auto signed char *b;
auto signed r;
auto SIZE sz;
if(!dc) return(0x00);
if(!argp) return(0x00);
b = (argp);
if(!(GetTextExtentPoint32(dc,b,ct(b),&sz))) return(0x00);
r = (R(cy,sz));
return(r);
}
