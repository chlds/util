/* **** Notes

Cascade

Remarks:
Call fn. rl_v later
Based on UTF-8
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cas_rl_b(signed char **argp)) {
auto signed char **v;
auto signed char *b;
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
v = (argp);
b = (*v);
embed(0x00,b);
rl(b);
b = (0x00);
*argp = (b);
v++;
if(!v) return(0x00);
b = (*v);
*argp = (b);
b = (0x00);
v = (0x00);
return(cas_b(argp));
}
