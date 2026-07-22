# define CAR_H
# include "./../../../config.h"

signed(__cdecl deb(signed(arg))) {
if(!arg) return(0x01);
return(0x02*(deb(--arg)));
}
