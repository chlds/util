# define CAR_H
# include "./../../../config.h"

signed(__cdecl wcharle_xe(signed short(*args),signed(argp))) {
auto signed r;
r = wcharvalid(args);
if(!r) return(argp);
ADD(args,r);
return(wcharle_xe(args,++argp));
}
