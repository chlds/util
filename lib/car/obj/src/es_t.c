/* **** Notes

Escape sequences
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl es_t(void)) {
auto signed char *b = ("\033[1;1H");
auto signed r;
r = wr_b(0x01,b,ct(b));
if(!(r^(~0x00))) AND(r,0x00);
return(r);
}
