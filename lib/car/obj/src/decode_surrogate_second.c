/*

Decode bytes into a character based on UTF-16
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl decode_surrogate_second(signed short(*di),signed(si))) {
auto signed surrog;
auto signed additional = (0x10000);
auto signed second = (0xDC00);
if(!di) return(0x00);
surrog = (si);
surrog = (surrog+(0x01+(~additional)));
AND(surrog,0x3FF);
OR(surrog,second);
*di = (signed short) (surrog);
return(0x02);
}
