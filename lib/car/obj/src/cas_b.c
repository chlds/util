/* **** Notes

Cascade

Remarks:
Call fn. rl_v later
Based on UTF-8
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cas_b(signed char **argp)) {
auto signed char **b;
auto signed r;
if(!argp) return(0x00);
b = (argp);
if(!(0x01<(ct_v(b)))) return(0x00);
r = cas_rl_b(argp);
if(!r) return(r);
r = (r+(~0x00));
return(r);
}
