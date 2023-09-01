# define CAR_H
# include "./../../../config.h"

signed(__cdecl cvat_mn_rrrr(signed char **argp)) {
if(!argp) return(~0x00);
if(!(*argp)) return(~0x00);
argp++;
return(cvat_mn_rrrrr(argp));
}
