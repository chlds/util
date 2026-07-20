# define CAR_H
# include "./../../../config.h"

signed(__cdecl ra(signed char(*args),signed(argp))) {
auto signed r;
auto signed u = (0x01);
auto signed b = (0x02);
r = counc(args);
if(r<(b)) return(u);
if(argp<(b)) return(b);
if(r<(argp)) return(r);
return(argp);
}
