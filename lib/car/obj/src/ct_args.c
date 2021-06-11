/* **** Notes

Count arguments.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl ct_args(signed char(*argp))) {

auto signed i,r;

if(!argp) return(0x00);
if(!(*argp)) return(0x00);

argp = (argp+(cue2(argp)));

r = ct2(SP,argp);
argp = (r+(argp));
if(!r) return(0x00);

return(0x01+(ct_args(argp)));
}
