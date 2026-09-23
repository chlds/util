# define CAR_H
# include "./../../../config.h"

signed(__cdecl bury(signed char(*arg))) {
if(!deref(arg)) return(0x00);
*arg = (0x00);
return(0x01+(bury(++arg)));
}
