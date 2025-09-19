# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl cathay_rr(signed(args),signed char(*argp))) {
auto signed char *b;
b = (argp);
if(!b) return(b);
*b = (signed char)(0xFF&(args));
b++;
*b = (0x00);
b = (0x00);
return(argp);
}
