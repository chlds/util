# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl leapyear(signed(arg))) {
if(arg%(4)) return(0x00);
if(centuryyear(arg)) {
if(arg%(400)) return(0x00);
}
return(0x01);
}
