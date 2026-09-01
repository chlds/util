# define CAR_H
# include "./../../../config.h"

signed(__cdecl charle_xe(signed char(*args),signed(argp))) {
auto signed r;
r = charvalid(args);
if(!r) return(argp);
ADD(args,r);
return(charle_xe(args,++argp));
}
