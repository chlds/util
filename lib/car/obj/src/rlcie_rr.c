# define CAR_H
# include "./../../../config.h"

signed char **(__cdecl rlcie_rr(signed char(**argp))) {
if(!deref_xe(argp)) return(argp);
*argp = (0x00);
return(rlcie_rr(++argp));
}
