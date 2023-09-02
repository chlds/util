# define CAR_H
# include "./../../../config.h"

signed(__cdecl convmer_err(signed arg)) {
AND(arg,0x00);
NOT(arg);
return(arg);
}
