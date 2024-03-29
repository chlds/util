# define CAR_H
# include "./../../../config.h"

signed long long(__cdecl carllh(signed long long arg)) {
auto signed long long mask = (0xFFFF);
auto signed long long b = (0x10);
SHR(arg,b);
AND(arg,mask);
return(arg);
}
