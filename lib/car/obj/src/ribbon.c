# define CAR_H
# include "./../../../config.h"

signed(__cdecl ribbon(signed(*args),signed(argp))) {
auto signed r;
if(!(0x00<(argp--))) return(0x00);
r = derefr(args++);
if(!r) return(r);
return(r+(ribbon(args,argp)));
}
