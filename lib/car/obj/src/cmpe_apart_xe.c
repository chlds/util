# define CAR_H
# include "./../../../config.h"

signed(__cdecl cmpe_apart_xe(signed char(*args),signed char(*argp))) {
auto signed r;
r = ct(argp);
if(r<(ct(args))) return(cmpe_apart(argp,args));
return(cmpe_apart(args,argp));
}
