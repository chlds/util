# define CAR_H
# include "./../../../config.h"

signed(__cdecl ldl(signed arg)) {
auto signed mask = (0xFFFF);
AND(arg,mask);
return(arg);
}
