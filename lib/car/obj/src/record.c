# define CAR_H
# include "./../../../config.h"

signed *(__cdecl record(signed char(*args),signed(*argp))) {
return(argp?argp:chainage(args));
}
