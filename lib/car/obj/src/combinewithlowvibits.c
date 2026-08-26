# define CAR_H
# include "./../../../config.h"

signed(__cdecl combinewithlowvibits(signed(args),signed(argp))) {
auto signed a = (0x06);
argp = shl_xxe(argp,a);
return(argp|(extractlow6bits(args)));
}
