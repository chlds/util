# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl ante(signed char(*argp))) {
// return(argp?--argp:argp);
return(--argp);
}
