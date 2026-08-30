# define CAR_H
# include "./../../../config.h"

signed(__cdecl dedibyte(signed char(*arg))) {
auto signed c = (0x1F);
auto signed e = (0x7F);
if(EQ(e,db(deref(arg)))) return(e);
if(c<(db(deref(arg)))) return(0x00);
return(db(deref(arg)));
}
