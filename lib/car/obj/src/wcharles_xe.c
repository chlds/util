# define CAR_H
# include "./../../../config.h"

signed(__cdecl wcharles_xe(signed short(*args),signed(argp))) {
auto signed r;
r = wcharvalid(args);
if(!r) return(argp);
ADD(args,r);
ADD(argp,r);
return(wcharles_xe(args,argp));
}
