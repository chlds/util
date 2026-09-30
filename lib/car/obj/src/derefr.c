# define CAR_H
# include "./../../../config.h"

signed(__cdecl derefr(signed(*argp))) {
return(argp?*argp:0x00);
}
