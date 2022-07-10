/*

Decode bytes into a character based on UTF-16
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl decode_surrogate_first(signed short(*di),signed(si))) {
auto signed surrog;
auto signed additional = (0x10000);
auto signed first = (0xD800);
if(!di) return(0x00);
surrog = (si);
surrog = (surrog+(0x01+(~additional)));
SHR(surrog,0x0A);
AND(surrog,0x3FF);
OR(surrog,first);
*di = (signed short) (surrog);
return(0x02);
}
