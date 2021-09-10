/* **** Notes

Escape sequences
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl es_n(void)) {

auto signed char *b = ("\033[1B");
auto signed r;

r = wr_b(0x01,b,ct(b));
if(!(r^(~0x00))) AND(r,0x00);

return(r);
}
