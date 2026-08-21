# define CAR_H
# include "./../../../config.h"

signed(__cdecl sootr(signed(*args),signed(*argp))) {
if(!argp) return(0x00);
*argp = derefr(args);
return(*argp);
}
