# define CAR_H
# include "./../../../incl/config.h"

signed(__cdecl derefs(signed short(*argp))) {
return(argp?*argp:0x00);
}
