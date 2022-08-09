/* **** Notes

Escape sequences
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl es_l(void)) {
auto signed char *b = ("\033[2J");
auto signed r;
if(!(es_t())) return(0x00);
r = wr_b(0x01,b,ct(b));
if(!(r^(~0x00))) AND(r,0x00);
return(r);
}
