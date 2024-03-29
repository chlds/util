# define CAR_H
# include "./../../../config.h"

signed(__cdecl carl(signed arg)) {
auto signed mask = (0xFFFF);
AND(arg,mask);
return(arg);
}
