/* **** Notes

Cascade

Remarks:
Call fn. rl_v later
Based on UTF-8
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cas_rl_b(signed char **argp)) {
auto signed char *b;
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
b = (*argp);
embed(0x00,b);
rl(b);
b = (0x00);
*argp = (*(0x01+(argp)));
argp++;
return(0x01+(cas_b_r(argp)));
}
