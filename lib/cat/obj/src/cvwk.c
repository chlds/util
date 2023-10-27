# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl cvwk(signed arg)) {
auto signed r;
auto signed days = (0x07);
auto signed sat = (0x03);
auto signed dif = (0x02);
auto signed mon = (0x01);
r = (arg);
if(r<(0x00)) r = (0x01+(~r));
r = (r%(days));
r = (days+(0x01+(~r)));
r = (dif+(r));
r = (r%(days));
if(!r) r = (mon);
if(sat<(r)) r = (mon);
return(r);
}
