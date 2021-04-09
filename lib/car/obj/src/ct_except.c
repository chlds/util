/* **** Notes

Count letters to the terminating null character except for a letter you'd select.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl ct_except(signed char(arg),signed char(*argp))) {

auto signed r;

if(!argp) return(0x00);
if(!(*argp)) return(0x00);

AND(r,0x00);
if(arg^(*argp)) OR(r,0x01);

argp++;

return(r+(ct_except(arg,argp)));
}
