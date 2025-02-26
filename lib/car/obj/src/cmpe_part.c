/* Synopsis

Compare partially
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cmpe_part(signed char(*args),signed char(*argp))) {
auto signed r;
auto signed mask = (0xFF);
AND(r,0x00);
if(!args) return(r);
if(!argp) return(r);
r = (signed)(mask&(*args));
if(!r) return(r);
if(r^(signed)(mask&(*argp))) return(r+(0x01+(~(signed)(mask&(*argp)))));
return(cmpe_part(++args,++argp));
}
