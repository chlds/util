# define CAR_H
# include "./../../../config.h"

signed(__cdecl charles_xe(signed char(*args),signed(argp))) {
auto signed r;
r = charvalid(args);
if(!r) return(argp);
ADD(args,r);
ADD(argp,r);
return(charles_xe(args,argp));
}
