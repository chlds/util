/* **** Notes

Inspect the byte order.
*/


# define CAR
# include <stdio.h>
# include <errno.h>
# include "./../../../incl/config.h"

signed(__cdecl insp_b_utf_8_r(signed(cache),signed(fd),size_t(arg))) {

auto signed char *b;
auto signed r;
auto signed short flag;
auto size_t s;

if(fd<(0x00)) return(0x00);
if(!cache) return(0x01);
if(!arg) return(0x01);

b = (0x00);
if(!(cat_bb(&b,0x00))) return(0x00);

r = insp_b_utf_8_r_r(b,cache,fd,arg);
// if(!r) printf("%s \n","<< Error at fn. insp_b_utf_8_r_r()");

embed(0x02,b);
rl(b);
b = (0x00);

return(r);
}
