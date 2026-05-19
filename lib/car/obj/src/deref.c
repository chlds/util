# define CAR_H
# include "./../../../config.h"

signed(__cdecl deref(signed char(*argp))) {
return(argp?*argp:0x00);
}
