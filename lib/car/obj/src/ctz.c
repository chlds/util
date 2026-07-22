# define CAR_H
# include "./../../../config.h"

signed(__cdecl ctz(signed(arg))) {
if(!arg) return(gne(sizeof(arg)));
return(counttrailingzeros(arg));
}
