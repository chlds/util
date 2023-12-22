# define CAR_H
# include "./../../../config.h"

signed(__cdecl ldw_w(signed arg)) {
auto signed mask = (0xFFFF);
auto signed b = (0x10);
SHR(arg,b);
AND(arg,mask);
return(arg);
}
