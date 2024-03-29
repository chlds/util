# define CAR_H
# include "./../../../config.h"

signed long long(__cdecl carlll(signed long long arg)) {
auto signed long long mask = (0xFFFF);
AND(arg,mask);
return(arg);
}
