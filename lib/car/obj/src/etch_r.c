# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl etch_r(signed(args),signed char(*argp))) {
if(!argp) return(argp);
*argp = (signed char)(db(args));
if(!post(argp)) return(annihil(argp));
*post(argp) = (0x00);
return(argp);
}
