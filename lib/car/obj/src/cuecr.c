# define CAR_H
# include "./../../../config.h"

signed(__cdecl cuecr(signed char *argp)) {
if(!(EQ(CR,deref(argp)))) return(0x00);
return(0x01);
}
