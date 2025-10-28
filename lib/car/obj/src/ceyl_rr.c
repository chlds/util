# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl ceyl_rr(signed(args),signed char(*argp))) {
auto signed mask = (0xFF);
auto signed radix = (0x10);
auto signed char *table = ("0123456789ABCDEF");
if(!argp) return(argp);
args = (mask&(args));
argp = catne(argp,cathay(mask&(*(table+(args%(radix))))));
args = (args/(radix));
if(!args) return(argp);
return(ceyl_rr(args,argp));
}
