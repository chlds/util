/*

Return the number of Unicode bytes for a character based on UTF-8
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl ncharbyte(signed arg)) {

auto signed A_4B = (0x001FFFFF); // a 21-bit (.oooo.oooo .oooi.iiii .iiii.iiii .iiii.iiii) character expressed in 4bytes
auto signed A_3B = (0x0000FFFF); // a 16-bit (.oooo.oooo .oooo.oooo .iiii.iiii .iiii.iiii) character expressed in 3 bytes
auto signed A_2B = (0x000003FF); // an 11-bit (.oooo.oooo .oooo.oooo .oooo.oiii .iiii.iiii) character expressed in 2 bytes
auto signed A_1B = (0x0000007F); // a 7-bit (.oooo.oooo .oooo.oooo .oooo.oooo .oiii.iiii) character expressed in 1 byte
auto signed mask = (A_4B);
auto signed r;

r = (arg);
// r = (mask&(r));

r = (r&(~(A_1B)));
if(!r) return(0x01);

r = (r&(~(A_2B)));
if(!r) return(0x02);

r = (r&(~(A_3B)));
if(!r) return(0x03);

r = (r&(~(A_4B)));
if(!r) return(0x04);

return(0x00);
}
