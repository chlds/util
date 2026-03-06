# define CAR_H
# include "./../../../config.h"

signed(__cdecl deburr(void(*args),signed(argp))) {
return(argp+(deburr_r(args,argp)));
}
