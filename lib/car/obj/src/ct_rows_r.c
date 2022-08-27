/* **** Notes

Count
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl ct_rows_r(signed(arg),signed char(*argp))) {
auto signed r;
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
r = ct_a(argp);
if(!r) return(0x00);
argp = (r+(argp));
arg = (arg+(0x01+(~r)));
if(arg<(0x00)) return(0x00);
return(r+(ct_rows_r(arg,argp)));
}
