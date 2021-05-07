/*

Decode bytes into a character based on UTF-16.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl decode_surrogate_first(signed short(*di),signed(si))) {

auto signed additional = (0x10000);
auto signed first = (0xD800);

auto signed char *b;
auto signed surrog;
auto signed i,r;
auto signed short flag;

if(!di) return(0x00);

surrog = (si);
surrog = (surrog+(0x01+(~additional)));
SHR(surrog,0x0A);
AND(surrog,0x3FF);
OR(surrog,first);

*di = (signed short) (surrog);

return(0x02);
}
