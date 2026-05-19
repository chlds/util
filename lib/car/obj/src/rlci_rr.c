# define CAR_H
# include "./../../../config.h"

signed char **(__cdecl rlci_rr(signed char(**argp))) {
if(!deref_xe(argp)) return(argp);
*argp = annih(*argp);
return(rlci_rr(++argp));
}
