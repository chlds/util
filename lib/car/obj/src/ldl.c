# define CAR_H
# include "./../../../config.h"

signed(__cdecl ldl(signed(args),signed(argp))) {
auto signed mask = (0xFFFF);
AND(argp,mask);
NOT(mask);
AND(args,mask);
OR(args,argp);
return(args);
}
