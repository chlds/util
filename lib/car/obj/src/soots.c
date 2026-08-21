# define CAR_H
# include "./../../../config.h"

signed(__cdecl soots(signed short(*args),signed short(*argp))) {
if(!argp) return(0x00);
*argp = (signed short)(derefs(args));
return(*argp);
}
