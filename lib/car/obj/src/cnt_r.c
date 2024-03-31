# define CAR_H
# include "./../../../config.h"

signed(__cdecl cnt_r(signed char(**argp))) {
auto signed r;
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
r = ct(*argp);
argp++;
return(r+(cnt_r(argp)));
}
