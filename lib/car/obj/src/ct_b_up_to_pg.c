/*

Count
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl ct_b_up_to_pg(signed(arg),pg_t(*argp))) {
auto signed char *b;
auto signed r;
if(arg<(0x01)) return(0x00);
if(!argp) return(0x00);
b = (*(CLIH_BASE+(R(b,*argp))));
r = ct(b);
if(!r) return(0x00);
argp = (*(CLIH_DI+(R(p,*argp))));
--arg;
return(r+(ct_b_up_to_pg(arg,argp)));
}
