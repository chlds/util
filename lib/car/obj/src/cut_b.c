/* **** Notes

Cut

Remarks:
Call fn. rl later
*/


# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl cut_b(signed(arg),signed char(**argp))) {
auto signed char *b;
if(arg<(0x01)) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
b = (*argp);
b = dupl_b(arg,b);
if(!b) return(b);
if(!(clip_b(arg,argp))) {
embed(0x00,b);
rl(b);
b = (0x00);
}
return(b);
}
