/* **** Notes

Escape sequences
*/


# define CAR
# include <io.h>
# include "./../../../incl/config.h"

signed(__cdecl es_at(void)) {

auto signed char *b;
auto signed r;

AND(r,0x00);
OR(r,0x01);

return(r);
}
