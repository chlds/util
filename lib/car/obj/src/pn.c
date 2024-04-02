# define CAR_H
# include "./../../../config.h"

signed(__cdecl pn(signed arg)) {
if(!arg) return(arg);
if(!(EQ(arg,pn_r(arg)))) return(0x00);
return(0x01);
}
