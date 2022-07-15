/* **** Notes

Count arguments
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl ct_args(signed char(*argp))) {
auto signed r;
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
argp = (argp+(cue_ready(argp)));
r = ct2(SP,argp);
argp = (r+(argp));
if(!r) return(0x00);
return(0x01+(ct_args(argp)));
}
