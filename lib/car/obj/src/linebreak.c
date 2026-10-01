# define CAR_H
# include "./../../../config.h"

signed(__cdecl linebreak(signed char(*arg))) {
return(!(LF+(cii(deref(arg))))?0x01:
CR+(cii(deref(arg)))?0x00:
LF+(cii(deref(post(arg))))?0x00:
0x02);
}
