# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl byteweave_r(signed(args),signed(argp))) {
auto signed char *b;
auto signed a = (0x06);
auto signed c = (0x80);
if(!(0x00<(--argp))) return(0x00);
b = etch(c|(args&(gnb(a))));
// b = etch(c|(args&(0x3F)));
args = shr_xxe(args,a);
return(catne(b,byteweave_r(args,argp)));
}
