# define CAR_H
# include "./../../../config.h"

signed(__cdecl derefs(signed short(*argp))) {
return(argp?*argp:0x00);
}
