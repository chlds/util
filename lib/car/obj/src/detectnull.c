# define CAR_H
# include "./../../../config.h"

signed(__cdecl detectnull(signed char(*args),signed char(*argp))) {
return(argp?!args:!argp);
}
