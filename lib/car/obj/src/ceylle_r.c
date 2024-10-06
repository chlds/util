# define CAR_H
# include "./../../../config.h"

signed(__cdecl ceylle_r(signed char(*args),signed(argp))) {
auto signed r;
auto signed radix;
auto signed mask = (0xFF);
auto signed char *table = ("0123456789ABCDEF");
if(!args) return(0x00);
radix = ct(table);
r = (signed)(mask&(*args));
r = ord(table,r);
if(!(r<(radix))) AND(r,0x00);
args++;
--argp;
if(!(0x00<(argp))) return(r);
r = (r*(radix));
return(r+(ceylle_r(args,argp)));
}
