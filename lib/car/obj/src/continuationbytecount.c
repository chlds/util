# define CAR_H
# include "./../../../config.h"

signed(__cdecl continuationbytecount(signed(arg))) {
auto signed t = (0x01+(0xFFFF));
auto signed b = (0x01+(0x7FF));
auto signed u = (0x01+(0x7F));
if(!codepointvalid(arg)) return(0x00);
return(arg<(u)?1:arg<(b)?2:arg<(t)?3:4);
}
